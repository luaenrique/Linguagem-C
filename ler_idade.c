#include <stdio.h>
#include <stdlib.h>

//Esse código lê uma determinada idade, e a converte para dias, meses e anos.

main(){
	float anos, meses, dias; // Declarando as variáveis
	printf ("digite sua idade em dias\n"); // solicita a idade
	 scanf("%f",&dias); //guarda a idade na variável 'dias'
    	meses=(dias/30); //divide os dias por 30 para descobrir quantos meses
    	anos=(dias/365); // divide os dias por 365 para descobrir quantos anos
    	printf("a idade em anos e de %f\n, em meses e de %f\n e em dias e de %f", anos, meses, dias);//apresenta os dados
    	system ("pause");
}

//Luã Enrique Zangrande
//github.com/luaenrique/
