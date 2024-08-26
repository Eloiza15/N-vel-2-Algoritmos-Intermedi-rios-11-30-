#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h> 

// Nível 2: Algoritmos Intermediários (11-30)

// Jogo de Adivinhação: Implementa um jogo de adivinhação onde o usuário tenta adivinhar um número secreto.

int random();
void dicas(int number, int password, int attempt);

int main()
{
    int continuar = 1,
        password,
        attempt,
        number;

    do
    {
        // Limpa a tela (Nota: pode não funcionar em alguns sistemas operacionais)
        system("cls || clear");
        
        // Sorteia um número secreto entre 1 e 1000
        printf("Sorteando número entre 1 e 1000...\n");
        password = random();

        printf("Começou! Tente adivinhar o número!\n\n");
        attempt = 0;

        do
        {
            attempt++;
            printf("Tentativa %d: ", attempt);
            scanf("%d", &number);
            dicas(number, password, attempt);
        }
        while (number != password);

        printf("Digite 0 para sair, ou qualquer outro número para continuar: ");
        scanf("%d", &continuar);
    }
    while (continuar);

    return 0;
}

int random()
{
	setlocale(LC_ALL, "");
	
    // Inicializa a semente do gerador de números aleatórios
    // Movido para o main() para evitar inicialização repetida
    // srand((unsigned)time(NULL));
    
    return (1 + rand() % 1000);  // Gera um número entre 1 e 1000
}

void dicas(int number, int password, int attempt)
{
    if (number > password)
        printf("O número sorteado é menor que %d\n\n", number);
    else if (number < password)
        printf("O número sorteado é maior que %d\n\n", number);
    else
        printf("Parabéns! Você acertou o número em %d tentativas!\n\n", attempt);
        
}
