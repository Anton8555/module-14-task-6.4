#include <iostream>

int main() {
    const int n = 2;
    int A[n][n], B[n][n];
    bool result;

    // matrix elements input
    // matrix A
    std::cout << "Enter elements of matrix 'A':\n";
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            std::cin >> A[i][j];
    // matrix B
    std::cout << "Enter elements of matrix 'B':\n";
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            std::cin >> B[i][j];

    // task: matrix compare
    result = true;  // let's say the matrices are equal
    for(int i=0; (i<n) && result; i++)
        for(int j=0; j<n; j++)
            if( A[i][j] != B[i][j] ) {
                result = false;
                break;
            }

    // result output
    std::cout
        << std::endl
        << "Compare result: " << (result?"equal":"not equal") << std::endl;

    return 0;
}
