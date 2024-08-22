#include <stdio.h>
#include <locale.h>

//Nível 2: Algoritmos Intermediários (11-30)

//Cálculo de Potência: Calcule o valor de um número elevado a uma potência.

int main() {
	setlocale(LC_ALL, "");
	
	  int base, expoente, resultado = 1, i;
       
       printf ("Digite o número a ser elevado(base):\n");
        scanf ("%d", &base);
       printf ("Digite o número da elevação da potência(expoente):\n");
        scanf ("%d", &expoente);
        
         for (i = 0; i < expoente ; i++){
           resultado *= base;
       }
           
        printf ("O resultado é: %d", resultado);
        
             
    return 0;
}
