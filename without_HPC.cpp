// matrix_multiplication_no_hpc.cpp
#include <iostream>

using namespace std;

const int SIZE = 1000;  // Size of the matrix

void matrixMultiply(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            C[i][j] = 0;
            for (int k = 0; k < SIZE; k++) {
                C[i][j] += A[i][k] * B[i][k];
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

    clock_t start = clock();  // Start time for sequential computation

    matrixMultiply(A, B, C);  // Matrix multiplication without parallelization

    clock_t end = clock();  // End time for sequential computation
    cout << "Time taken (sequential): " << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;

    return 0;
}
