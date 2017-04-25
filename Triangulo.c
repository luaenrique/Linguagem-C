#include <stdio.h>
#include <stdlib.h>

//Esse código verifica qual é o tipo de triângulo formado através dos valores de seus lados

main(){
	float A,B,C; // definindo as variáveis
	
	printf("digite o valor do lado A, B e C respectivamente\n");
		scanf("%f %f %f", &A,&B,&C);
		
	if(A>B+C||B>A+C||C>A+B){ //um lado não pode ser maior que a soma dos outros dois para que se obtenha um triângulo
		printf("nao forma um triangulo");
	}	
	else{
		if(A==B && B==C){ // verifica se os lados A, B e C são iguais.
			printf("equilatero");
		}
		 else{
			 if(A==B||B==C||C==A){ // Verifica se pelo dois lados são iguais
			 	printf("isosceles"); 
			 }
			 else{ // se não corresponder aos dois tipos acima, retorna escaleno.
				 printf("escaleno");
			 }
		 }
	}
		
}