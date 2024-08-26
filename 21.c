#include <stdio.h>
#include <locale.h>

// Nível 2: Algoritmos Intermediários (11-30)

//Busca Linear: Implementa uma busca linear em um vetor.

int linearSearch(int a[], int size, int key) {
    int i;
    for (i = 0; i < size; i++) {
        if (a[i] == key) {
            return i; // valor encontrado, retorna o índice
        }
    }
    return -1; // valor não encontrado
}

int main() {
    setlocale(LC_ALL, "");

    // Vetor de teste
    int a[] = {2, 3, 8, -1, -4, 20, 0, 5};
    int size = sizeof(a) / sizeof(a[0]); // Determina o tamanho do vetor automaticamente

    // Solicita ao usuário o valor a ser buscado
    int key;
    printf("Digite o valor que deseja buscar: ");
    scanf("%d", &key);

    // Realiza a busca e exibe o resultado
    int index = linearSearch(a, size, key);
    if (index != -1) {
        printf("Valor %d encontrado no índice %d\n", key, index);
    } else {
        printf("Valor %d não encontrado no vetor\n", key);
    }

    return 0;
}
