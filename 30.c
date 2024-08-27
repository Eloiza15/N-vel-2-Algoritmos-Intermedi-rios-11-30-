#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <string.h> 

// Nível 2: Algoritmos Intermediários (11-30)

//Conversão de String para Inteiro: Implemente uma função que converte uma string para um número inteiro (similar ao atoi).


int stringParaInteiro(const char *str) {
    int resultado = 0; 
    int sinal = 1;     
    int i = 0;       
    
    // Ignora espaços em branco iniciais
    while (str[i] == ' ') {
        i++;
    }

    // Verifica o sinal do número
    if (str[i] == '-') {
        sinal = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    // Converte a parte numérica da string para um número inteiro
    while (str[i] != '\0' && isdigit((unsigned char)str[i])) {
        resultado = resultado * 10 + (str[i] - '0');
        i++;
    }

    return sinal * resultado; 
}

int main() {
    char str[100];

    // Solicita ao usuário a entrada da string
    printf("Digite uma string que representa um número inteiro: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        // Remove a nova linha no final da string, se presente
        str[strcspn(str, "\n")] = '\0';

        // Converte a string para inteiro usando a função stringParaInteiro
        int numero = stringParaInteiro(str);

        // Exibe o número inteiro resultante
        printf("O número convertido é: %d\n", numero);
    } else {
        printf("Erro ao ler a entrada.\n");
    }

    return 0;
}
