// gcc sequential.c -o sequential
#include <stdio.h>
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
    for(i =0; i < BIG_DATA_SIZE; ++i){
        Result[i] = BigData1[i] + BigData2[i];
    } 
    // Print out the result;
    for(i =0; i < BIG_DATA_SIZE; ++i){
//        printf("Result[%d]=%d\n",i,Result[i]);
    } 
    

    return 0;
}
