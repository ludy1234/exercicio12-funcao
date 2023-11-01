/*#include <stdio.h>

    void linha(int A[10][10], int linha1, int linha2) {
        for (int i = 0; i < 10; i++) {
            int temp = A[linha1][i];
            A[linha1][i] = A[linha2][i];
            A[linha2][i] = temp;
        }
    }

    void coluna(int A[10][10], int col1, int col2) {
        for (int i = 0; i < 10; i++) {
            int temp = A[i][col1];
            A[i][col1] = A[i][col2];
            A[i][col2] = temp;
        }
    }

    void diagonal(int A[10][10]) {
        for (int i = 0; i < 10; i++) {
            int temp = A[i][i];
            A[i][i] = A[i][9 - i];
            A[i][9 - i] = temp;
        }
    }

    void linhaColuna(int A[10][10], int lin, int col) {
        for (int i = 0; i < 10; i++) {
            int temp = A[lin][i];
            A[lin][i] = A[i][col];
            A[i][col] = temp;
        }
    }

    void printMatrix(int A[10][10]) {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                printf("%d\t", A[i][j]);
            }
            printf("\n");
        }
    }

    int main() {
        int A[10][10];
        // Preencha a matriz A com os valores desejados.

        // Realize as trocas especificadas
        linha(A, 1, 7);
        coluna(A, 3, 9);
        diagonal(A);
        linhaColuna(A, 4, 9);

        // Imprima a matriz alterada
        printf("Matriz Alterada:\n");
        printMatrix(A);

        return 0;
    }*/
