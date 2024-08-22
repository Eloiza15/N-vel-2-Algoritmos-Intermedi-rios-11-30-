#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

//Nível 2: Algoritmos Intermediários (11-30)

//Palíndromo: Verifica se um número ou palavra é palíndromo.

int main() {
	 setlocale(LC_ALL, "");
	 
    char str[100];
    int inicio, fim;

    printf("Digite uma palavra ou número: ");
    fgets(str, sizeof(str), stdin);

    // Remove o caractere de nova linha, se presente
    str[strcspn(str, "\n")] = '\0';

    // Inicializar os índices
    inicio = 0;
    fim = strlen(str) - 1;

    // Verificar se a palavra é um palíndromo
    while (inicio < fim) {
        // Ignorar caracteres não alfabéticos e comparar caracteres em minúsculo
        if (tolower(str[inicio]) != tolower(str[fim])) {
            printf("\"%s\" não é um palíndromo.\n", str);
            return 0;
        }
        inicio++;
        fim--;
    }

    printf("\"%s\" é um palíndromo.\n", str);
    return 0;
}
