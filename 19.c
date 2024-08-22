#include <stdio.h>
#include <locale.h>

// Nível 2: Algoritmos Intermediários (11-30)

// Números Perfeitos: Verifica se um número é perfeito.

int main() {
    setlocale(LC_ALL, "");
    
    int n, soma = 0, i;
    
    // Solicita ao usuário um número maior que zero
    do {
        printf("Digite um número maior que zero:\n");
        scanf("%i", &n);
    } while (n <= 0);
    
    // Calcula a soma dos divisores próprios de n
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }
    
    // Verifica se o número é perfeito
    if (soma == n) {
        printf("%i é um número perfeito.\n", n);
    } else {
        printf("%i não é um número perfeito.\n", n);
    }
    
    return 0;
}
