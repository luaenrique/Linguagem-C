#include <stdio.h>
#include <stdlib.h>

//Esse c�digo verifica qual � o tipo de tri�ngulo formado atrav�s dos valores de seus lados

main(){
	float A,B,C; // definindo as vari�veis
	
	printf("digite o valor do lado A, B e C respectivamente\n");
		scanf("%f %f %f", &A,&B,&C);
		
	if(A>B+C||B>A+C||C>A+B){ //um lado n�o pode ser maior que a soma dos outros dois para que se obtenha um tri�ngulo
		printf("nao forma um triangulo");
	}	
	else{
		if(A==B && B==C){ // verifica se os lados A, B e C s�o iguais.
			printf("equilatero");
		}
		 else{
			 if(A==B||B==C||C==A){ // Verifica se pelo dois lados s�o iguais
			 	printf("isosceles"); 
			 }
			 else{ // se n�o corresponder aos dois tipos acima, retorna escaleno.
				 printf("escaleno");
			 }
		 }
	}
		
}