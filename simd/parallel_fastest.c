// gcc -mavx2 parallel_fastest.c -o parallel_fastest
// This example performs the addition faster.
// This example also initializes our arrays to a value faster
#include <stdio.h>
#include <string.h>
#include <immintrin.h> // Include our intrinsics header

#define BIG_DATA_SIZE 100000000

// Create some arrays array
int BigData1[BIG_DATA_SIZE];
int BigData2[BIG_DATA_SIZE];
int Result[BIG_DATA_SIZE];

int main(){
    // Initialize array data
    memset(Result,0,BIG_DATA_SIZE*sizeof(int));
    int i=0;
    for(i =0; i < BIG_DATA_SIZE; i=i+8){
        __m256i temp = _mm256_set_epi32(i+7,i+6,i+5,i+4,i+3,i+2,i+1,i); 
       _mm256_store_si256((__m256i*)&BigData1[i],temp);
       _mm256_store_si256((__m256i*)&BigData2[i],temp);
    } 
    // Perform an operation on our data.
    // i.e. do some meaningful work
    for(i =0; i < BIG_DATA_SIZE; i=i+8){
        // Create two registers for signed integers('si')
        __m256i reg1 = _mm256_load_si256((__m256i*)&BigData1[i]);
        __m256i reg2 = _mm256_load_si256((__m256i*)&BigData2[i]);
        // Store the result
        __m256i reg_result = _mm256_add_epi32(reg1,reg2); 
        // Store our result from our vector register into an array
       _mm256_store_si256((__m256i*)&Result[i],reg_result);
    } 
    // Print out the result;
    for(i =0; i < BIG_DATA_SIZE; ++i){
//        printf("Result[%d]=%d\n",i,Result[i]);
    } 
    

    return 0;
}
