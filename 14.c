#include <stdio.h>
#include <locale.h>

//Nível 2: Algoritmos Intermediários (11-30)

//Inversão de Números: Inverte a ordem dos dígitos de um número.


//Potenciacao
int pot (int base, int expoente){
	int resultado = 1;
	while (expoente >0){
		resultado = resultado*base;
		expoente--;
	}
	return resultado;
}

//Funcao que conta a quantidade de digitos de 
//um numero inteiro passado como parametro
int qtde_digitos (int numero){
	int cont=0;
	//A variavel contador, conta q quantidade de vezes que o numero é divisivel por 10
	while (numero>= 1){
		numero = numero/10;
		cont++;
	}
	return cont;
}

//Inverte os digitos de um numero inteiro passado como parametro para funcao
int inverte (int numero){
	int invertido = 0,
	 contador = qtde_digitos(numero);
	while (numero>=1){
		
		invertido = invertido + (numero%10)*pot(10, contador -1);
		numero = numero/10;
		contador--;
	}
    return (invertido);
}

main() {
	setlocale(LC_ALL, "");
      int numero;
      printf ("\n Digite um número para invertemos: ");
      scanf ("%d", &numero);
      printf ("\nInvertido: %d\n", inverte (numero));
	 
    return 0;
}
