#include <stdio.h>
#include <locale.h>

// Nível 2: Algoritmos Intermediários (11-30)

// Ordenação de Vetor: Ordena um vetor de números em ordem crescente.

int main() {
	  setlocale(LC_ALL, "");
	
    int n;

    // Solicita ao usuário o número de elementos
    printf("Digite o número de elementos do vetor: ");
    scanf("%d", &n);

    int arr[n];

    // Solicita ao usuário os elementos do vetor
    printf("Digite %d números:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Ordena o vetor usando Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Exibe o vetor ordenado
    printf("Vetor ordenado em ordem crescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
