#include <stdio.h>
#include <locale.h>
#include <ctype.h> // Para a função tolower

// Nível 2: Algoritmos Intermediários (11-30)

//Contagem de Vogais: Conte o número de vogais em uma string.


int main() {
    char str[100]; // Buffer para armazenar a string
    int i, count = 0;

    // Solicita ao usuário a entrada da string
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin); // Lê a string, incluindo espaços

    // Conta o número de vogais
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // Converte o caractere para minúsculo para simplificar a comparação
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    // Exibe o número de vogais
    printf("Número de vogais na string: %d\n", count);

    return 0;
}
