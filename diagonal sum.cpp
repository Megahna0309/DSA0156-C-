#include <iostream>

int main() {
    int rows, cols;
    std::cout << "Enter the size of the matrix (rows cols): ";
    std::cin >> rows >> cols;

    int** mat = new int*[rows];

    for(int i = 0; i < rows; i++) {
        mat[i] = new int[cols];
    }

    std::cout << "Enter elements of the matrix:" << std::endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            std::cin >> mat[i][j];
        }
    }

    int diagonal1 = 0;
    int diagonal2 = 0;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(i == j) {
                diagonal1 += mat[i][j];
            }
            if(i + j == rows - 1) {
                diagonal2 += mat[i][j];
            }
        }
    }

    std::cout << "Sum of diagonal 1: " << diagonal1 << std::endl;
    std::cout << "Sum of diagonal 2: " << diagonal2 << std::endl;

    for(int i = 0; i < rows; i++) {
        delete[] mat[i];
    }

    delete[] mat;

    return 0;
}