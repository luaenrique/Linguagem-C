#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

main(){
    char st[80]; // declarando uma string (char com 80 posições)
    int i,tam,acont=0; // declarando as variaveis i, tamanho e contador de a, respectivamente.
    printf("Digite uma palavra:\n\n"); // solicitando uma palavra
        fgets(st,80,stdin); // capturando a palavra (variaveldastring,tamanho,stdin)
        fflush(stdin); // fflush
        tam=strlen(st); // tamanho recebendo o tamanho da string (obs: strlen(string) retorna o tamanho em caracteres de uma string).
        for(i=0;i<=tam;i++){ // contador de 0 até o numero de letras da string
            if(st[i]=='a'||st[i]=='A'){ // verifica se a posição da string correspondente ao contador possui 'a' ou 'A'
                acont++; // contador de a recebe +1
                st[i]='b'; //onde era a letra 'a' torna-se 'b'
            }
        }
        printf("A apareceu %d vezes na string %s.\n\n", acont, st);
        system("pause");
}                
