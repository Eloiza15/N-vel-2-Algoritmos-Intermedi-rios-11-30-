#include <stdio.h>
#include <locale.h>

//Nível 2: Algoritmos Intermediários (11-30)

//Soma dos Números Naturais: Calcula a soma dos primeiros N números naturais.

int main() {
 setlocale(LC_ALL, "");
   
    int num, contador;
    int soma = 0;
    
      printf("Digite um número \n");
       scanf ("%i", &num);
       
    for (contador = 0; contador <= num; contador++){
    	soma = soma + contador;
	}
	    
	    printf("%i", soma);

 return 0;

}
