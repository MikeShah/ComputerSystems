// gcc matrix.c -o matrix
// or
// gcc matrix.c -O3 matrix

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

#define N 512
double A[N][N];
double B[N][N];
double C[N][N];


int main(int argc, const char* argv[]){
    // Start our timers
    struct timeval start, end;
    gettimeofday(&start,NULL);    
    
    // Initialize array
    for(int i =0; i < N; ++i){
        for(int j =0; j < N; ++j){
            A[i][j] = (double)rand() / (double)RAND_MAX;
            B[i][j] = (double)rand() / (double)RAND_MAX;
            C[i][j] = (double)rand() / (double)RAND_MAX;
        }
    }

    // Perform multiplication
    for(int i =0; i < N; ++i){
        for(int j =0; j < N; ++j){
            for(int k =0; k < N; ++k){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    gettimeofday(&end, NULL);
    printf("%0.6f\n", (end.tv_sec-start.tv_sec)+1e-6*(end.tv_usec-start.tv_usec));

    return 0;
}
