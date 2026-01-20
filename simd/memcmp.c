// memcmp.c
//
// Basic example showcasing the 'idea' of simd instructions
// which use wider registers.
//
// This example uses the 'memcmp' function. It is similar to 'strcmp' in
// the <string.h> header, but it does not use the NULL terminator.
// Rather it treats two 'buffers' as unsigned char (or uint8_t) data and compares each byte.

#include <stdio.h>
#include <string.h> // for C standard library memcmp
// int memcmp(const void s1[.n], const void s2[.n], size_t n);

#include <stdint.h> // Allow us to use fixed-width types

// memcmp works by otherwise checking a 'binary blob' (i.e. binary data (unsigned char), or uint8_t) and checks if they are different
int memcmp_first_try(const void* s1, const void* s2, size_t n){
  unsigned char* s11 = (unsigned char*)s1;
  unsigned char* s12 = (unsigned char*)s2;
  for(size_t i=0; i< n; i++){
    if(s11[i] < s12[i]){
        return -1;
    }
    if(s11[i] > s12[i]){
      return 1;
    }
  }
  return 0;
}

// This version of memcmp is using a 'wider' type to try
// to speed things up.
int memcmp_uint64_t(const void* s1, const void* s2, size_t n){
  uint64_t* s11 = (uint64_t*)s1;
  uint64_t* s12 = (uint64_t*)s2;
  // If we have a 'small' memcmp, then just handle those
  // 8-bytes
  if(n<8){
    return memcmp_first_try(s11,s12,n);
  }

  long i=0;
  // 'n-8' because our 'width' is 8 bytes, so
  // we can otherwise handle the 'leftover' bytes.
  for(long i=0; i< n-8; i+=8){
    if(s11[i] < s12[i]){
        return -1;
    }
    if(s11[i] > s12[i]){
      return 1;
    }
  }
  // Handle last 8-bits by doing the naive algorithm so we
  // do not 'overstep
  return memcmp_first_try(&s11[i],&s12[i],n-i);
}

int main(){

  // Standard library example
  unsigned char buf1[] = {1,2,3,4,5,6,7,8,9,10};
  unsigned char buf2[] = {0,1,2,3,4,5,6,7,8,9};
  unsigned char buf3[] = {1,2,3,4,5,6,7,8,9,10};

  printf("memcmp buf1 and buf2: %d\n",memcmp(buf1,buf2,sizeof(buf1)));
  printf("memcmp buf2 and buf1: %d\n",memcmp(buf2,buf1,sizeof(buf1)));
  printf("memcmp buf3 and buf1: %d\n",memcmp(buf3,buf1,sizeof(buf1)));

  printf("memcmp_first_try buf1 and buf2: %d\n",memcmp_first_try(buf1,buf2,sizeof(buf1)));
  printf("memcmp_first_try buf2 and buf1: %d\n",memcmp_first_try(buf2,buf1,sizeof(buf1)));
  printf("memcmp_first_try buf3 and buf1: %d\n",memcmp_first_try(buf3,buf1,sizeof(buf1)));


  printf("memcmp_uint64_t buf1 and buf2: %d\n",memcmp_uint64_t(buf1,buf2,sizeof(buf1)));
  printf("memcmp_uint64_t buf2 and buf1: %d\n",memcmp_uint64_t(buf2,buf1,sizeof(buf1)));
  printf("memcmp_uint64_t buf3 and buf1: %d\n",memcmp_uint64_t(buf3,buf1,sizeof(buf1)));

  return 0;
}
