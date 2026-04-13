// gcc -mavx2 parallel.c -o parallel
#include <stdio.h>
#include <immintrin.h> // Include our intrinsics header

#define BIG_DATA_SIZE 100000000

// Create some arrays array
int BigData1[BIG_DATA_SIZE];
int BigData2[BIG_DATA_SIZE];
int Result[BIG_DATA_SIZE];

int main(){
    // Initialize array data
    int i=0;
    for(i =0; i < BIG_DATA_SIZE; ++i){
        BigData1[i] = i;
        BigData2[i] = i;
        Result[i] = 0;
    } 
    // Perform an operation on our data.
    // i.e. do some meaningful work
    for(i =0; i < BIG_DATA_SIZE; i=i+8){
        // Create two registers for signed integers('si')
        __m256i reg1 = _mm256_load_si256((__m256i*)&BigData1[i]);
        __m256i reg2 = _mm256_load_si256((__m256i*)&BigData2[i]);
        // Store the result
        __m256i reg_result = _mm256_add_epi32(reg1,reg2); 
        // Point to our data
        int* data = (int*)&reg_result[0];
        Result[i] = data[0];
        Result[i+1] = data[1];
        Result[i+2] = data[2];
        Result[i+3] = data[3];
        Result[i+4] = data[4];
        Result[i+5] = data[5];
        Result[i+6] = data[6];
        Result[i+7] = data[7];
    } 
    // Print out the result;
    for(i =0; i < BIG_DATA_SIZE; ++i){
//        printf("Result[%d]=%d\n",i,Result[i]);
    } 
    

    return 0;
}
