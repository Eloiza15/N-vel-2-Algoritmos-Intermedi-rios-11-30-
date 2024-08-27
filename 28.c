#include <stdio.h>
#include <locale.h>

// Nível 2: Algoritmos Intermediários (11-30)

//Determinante de uma Matriz 2x2: Calcule o determinante de uma matriz 2x2.

int main() {
    setlocale(LC_ALL, ""); // Configura a localidade para garantir a formatação correta

    int a, b, c, d;
    int determinant;

    // Solicita ao usuário a entrada dos elementos da matriz 2x2
    printf("Digite os elementos da matriz 2x2:\n");
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    printf("d: ");
    scanf("%d", &d);

    // Calcula o determinante
    determinant = (a * d) - (b * c);

    // Exibe o determinante
    printf("O determinante da matriz 2x2 é: %d\n", determinant);

    return 0;
}
