#include <stdio.h>
#include <locale.h>
#include <math.h>

// Nível 2: Algoritmos Intermediários (11-30)

//Conversão de Binário para Decimal: Converte um número binário para decimal.

int binarioParaDecimal(int binario) {
    int decimal = 0;
    int base = 1; // Base inicial é 1 (2^0)

    while (binario > 0) {
        // Obtém o último dígito binário
        int ultimoDigito = binario % 10;
        
        // Adiciona o valor decimal do último dígito binário
        decimal += ultimoDigito * base;

        // Move para o próximo dígito
        base *= 2;
        binario /= 10; // Remove o último dígito
    }
    
    return decimal;
}

int main() {
    setlocale(LC_ALL, ""); // Configura a localidade

    int binario;

    printf("Digite um número binário (apenas dígitos 0 e 1): ");
    scanf("%d", &binario);

    // Converte o número binário para decimal
    int decimal = binarioParaDecimal(binario);

    // Verifica se a conversão foi bem-sucedida
    // Não há verificação explícita de caracteres inválidos, assume-se que o input é válido
    printf("Número decimal: %d\n", decimal);
    
    return 0;
}
