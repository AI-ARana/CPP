#include <iostream>
#include <omp.h>  // OpenMP header file for parallelism

using namespace std;

const int SIZE = 1000;  // Size of the matrix

void matrixMultiply(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]) {
    // Parallelizing the outer loop using OpenMP
    #pragma omp parallel for
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            C[i][j] = 0;
            for (int k = 0; k < SIZE; k++) {
                C[i][j] += A[i][k] * B[k][j];  // Fixed the index here
            }
        }
    }
}

int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE];

    // Initializing matrices A and B
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            A[i][j] = i + j;
            B[i][j] = i - j;
        }
    }

    double start = omp_get_wtime();  // Start time for HPC computation

    matrixMultiply(A, B, C);  // Matrix multiplication using OpenMP

    double end = omp_get_wtime();  // End time for HPC computation
    cout << "Time taken (parallel with OpenMP): " << (end - start) << " seconds" << endl;

    return 0;
}
