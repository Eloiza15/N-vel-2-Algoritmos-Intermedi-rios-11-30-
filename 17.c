#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <string.h>

//Nível 2: Algoritmos Intermediários (11-30)

//Cálculo do MDC: Calcula o Máximo Divisor Comum (MDC) entre dois números.

int main() {
	 setlocale(LC_ALL, "");
	  
	  int n1, n2, a, b, resto; 
	  
	   printf("Digite o primeiro número:\n");
	    scanf ("%i", &n1);
	   printf("Digite o segundo número:\n");
	    scanf ("%i", &n2);
	    
	a = n1; b = n2;
	
	do{
		resto = a % b;
		a = b;
		b = resto;
	}while (resto != 0);
	  
	  printf("O MDC entre esses números é: %i", a);	 
	 
    return 0;
}
