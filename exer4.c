/*#include <stdio.h>

void somarColunas(int matriz[61][10]) {
    for (int j = 0; j < 10; j++) {
        int soma = 0;
        for (int i = 0; i < 61; i++) {
            soma += matriz[i][j];
        }
        matriz[60][j] = soma;
    }
}

void imprimirMatriz(int matriz[61][10]) {
    for (int i = 0; i < 61; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[61][10];

    somarColunas(matriz);

    imprimirMatriz(matriz);

    return 0;
}
*/