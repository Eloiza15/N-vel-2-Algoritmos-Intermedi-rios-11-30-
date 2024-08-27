#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define SIZE 3 // Define o tamanho das matrizes

// Nível 2: Algoritmos Intermediários (11-30)

// Multiplicação de Matrizes: Multiplique duas matrizes.


// Protótipos de funções
void printMatrix(int matrix[SIZE][SIZE]);

int main() {
    setlocale(LC_ALL, ""); // Configura a localidade para garantir formatação correta

    int i, j, k;
    int mat1[SIZE][SIZE] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }; // Matriz 1
    int mat2[SIZE][SIZE] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} }; // Matriz 2
    int mat3[SIZE][SIZE] = {0}; // Matriz para armazenar o resultado da multiplicação

    // Multiplicação das matrizes
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            mat3[i][j] = 0; // Inicializa o elemento da matriz resultado
            for (k = 0; k < SIZE; k++) {
                mat3[i][j] += mat1[i][k] * mat2[k][j]; // Calcula o produto escalar
            }
        }
    }

    // Impressão da matriz resultante
    printf("Matriz Resultante:\n");
    printMatrix(mat3); // Chama a função para imprimir a matriz resultante

    return 0;
}

// Função para imprimir uma matriz
void printMatrix(int matrix[SIZE][SIZE]) {
    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%4d ", matrix[i][j]); // Imprime cada elemento com largura de 4 caracteres
        }
        printf("\n"); // Nova linha após cada linha da matriz
    }
}
