#include <stdio.h>
#include <stdlib.h>

main(){
	float v1,v2,v3; // definindo as variáveis.
	
	
	printf("digite os tres valores respectivamente\n");
	
	scanf("%f %f %f", &v1, &v2, &v3); //guardando os valores nas variáveis.

    if(v1==v2 || v2==v3 || v3==v1){
		printf("ha numeros iguais"); //Como a ideia é descobrir o maior valor entre 3 numeros diferentes, essa verificação só será feita se não houver repetições
	}else{
		if(v1>v2 && v1>v3){ // verifica se o valor 1 é  maior que o valor 2 e que o valor 3, e se for verdade escreve na tela que o maior numero é o valor 1.
			printf("o maior numero e %f", v1);d
		}else{
			if(v2>v1 && v2>v3){ // verifica se o valor 2 é maior que os demais.
				printf("o maior numero e %f", v2);
			}else{
						if(v3>v1 && v3>v2){//verifica se o valor 3 é maior que o restante dos valores.
							printf("o maior numero e %f", v3);
						}
					}
				
			}
		
	}
}