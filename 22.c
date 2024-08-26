#include <stdio.h>
#include <locale.h>

#define MAXN 100100

// Nível 2: Algoritmos Intermediários (11-30)

//Busca Binária: Implementa uma busca binária em um vetor ordenado.

int n, m, vetor[MAXN];

// Função que realiza a busca binária
int buscab(int x) { 
    int ini = 0, fim = n - 1, meio;
    
    while (ini <= fim) {
        meio = (ini + fim) / 2;
        
        if (vetor[meio] == x) 
            return meio;
        if (vetor[meio] < x) 
            ini = meio + 1;
        if (vetor[meio] > x) 
            fim = meio - 1;
    }
    
    return -1; // Valor não encontrado
}

int main() {
    // Configura a localidade para suportar formatação conforme o idioma/locale
    setlocale(LC_ALL, "");

    // Solicita o tamanho do vetor e o número de buscas
    printf("Digite o número de elementos no vetor e o número de buscas: ");
    scanf("%d %d", &n, &m);

    // Solicita os valores do vetor
    printf("Digite os %d elementos do vetor (em ordem crescente):\n", n);
    for (int i = 0; i < n; i++) 
        scanf("%d", &vetor[i]);

    // Solicita e realiza a busca para cada valor
    printf("Digite os %d valores a serem buscados:\n", m);
    for (int i = 0; i < m; i++) {
        int num;
        scanf("%d", &num); // Lê o número a ser buscado
        int resultado = buscab(num); // Realiza a busca binária
        if (resultado != -1)
            printf("Valor %d encontrado no índice %d\n", num, resultado);
        else
            printf("Valor %d não encontrado\n", num);
    }
    
    return 0;
}
