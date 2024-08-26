#include <stdio.h>
#include <locale.h>

// Nível 2: Algoritmos Intermediários (11-30)

//Conversão de Decimal para Binário: Converte um número decimal para binário.

void decimalParaBinario(int decimal) {
    // Se o número decimal for 0, o binário também é 0
    if (decimal == 0) {
        printf("Número binário: 0\n");
        return;
    }

    // Vetor para armazenar o binário, o máximo de bits necessário é 32
    int binario[32];
    int index = 0;

    // Converte o número decimal para binário
    while (decimal > 0) {
        binario[index++] = decimal % 2;
        decimal /= 2;
    }

    // Exibe o número binário em ordem correta (reversa)
    printf("Número binário: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binario[i]);
    }
    printf("\n");
}

int main() {
    setlocale(LC_ALL, ""); // Configura a localidade

    int decimal;

    printf("Digite um número decimal: ");
    scanf("%d", &decimal);

    // Converte o número decimal para binário
    decimalParaBinario(decimal);

    return 0;
}
