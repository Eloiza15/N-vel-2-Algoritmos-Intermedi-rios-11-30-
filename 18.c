#include <stdio.h>
#include <locale.h>

// Nível 2: Algoritmos Intermediários (11-30)

// Cálculo do MMC: Calcula o Mínimo Múltiplo Comum (MMC) entre dois números.

int main() {
    setlocale(LC_ALL, "");

    int n1, n2, a, b, resto;
    int mdc, mmc;
    
    printf("Digite o primeiro número:\n");
    scanf("%i", &n1);
    
    printf("Digite o segundo número:\n");
    scanf("%i", &n2);
    
    a = n1;
    b = n2;
    
    // Algoritmo de Euclides para cálculo do MDC
    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }
    
    mdc = a;  // O MDC é encontrado
    
    // Calcular o MMC usando a fórmula MMC(a, b) = (|a * b|) / MDC(a, b)
    mmc = (n1 * n2) / mdc;
    
    printf("O MMC entre esses números é: %i\n", mmc);
    
    return 0;
}
