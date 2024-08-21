#include <stdio.h>
#include <locale.h>

//Nível 2: Algoritmos Intermediários (11-30)

//Fibonacci: Exibe os primeiros N termos da sequência de Fibonacci.

int main() {
	setlocale(LC_ALL, "");
       
       int n1,n4,n2 = 0,n3 = 1,cont;
         
         printf("Digite a quantidade de números Fibonacci que você quer ver: \n");
          scanf("%i", &n1);
          
          for (cont = 1; cont <= n1; cont ++){
          	printf("%i ", n2);
			n4 = n2 + n3;
          	n2 = n3;
          	n3 = n4;              	
	}
           
    printf("\n");   
    return 0;
}
