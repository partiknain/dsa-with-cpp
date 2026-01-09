#include <iostream>
using namespace std;

int diasum(int matrix[][3], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        // Primary diagonal
        sum += matrix[i][i];

        // Secondary diagonal (middle element double na ho)
        if (i != n - i - 1) {
            sum += matrix[i][n - i - 1];
        }
    }
    return sum;
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int n = 3;
    cout << "Sum of diagonals in matrix is " << diasum(matrix, n) << endl;
    return 0;
}
