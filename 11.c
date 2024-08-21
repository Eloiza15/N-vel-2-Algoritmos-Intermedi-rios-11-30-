#include <stdio.h>
#include <locale.h>

//Nível 2: Algoritmos Intermediários (11-30)

//Verificar Número Primo: Determina se um número é primo.

int main() {
 setlocale(LC_ALL, "");
 
   int num, i, resultado = 0;
 
     printf("Digite um número para determinarmos se ele é primo: ");
      scanf("%d", &num);
      

 for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) { 
       resultado++;
       break;
    }
 }

 if (resultado == 0 & num >= 2 ){
    printf("%d é um número primo\n", num);
 }else
    printf("%d não é um número primo\n", num);

 return 0;

}
