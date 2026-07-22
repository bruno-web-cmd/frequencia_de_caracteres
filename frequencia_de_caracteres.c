#include <stdio.h>
#include <string.h>

int main (){
    char frase [999];
    int contagem[26]={0};
    int i;

    printf("Seja bem vindo ao programa de frequencia_de_caracteres!");

    printf("\nDigite uma frase ou palavra: ");
    fgets(frase, sizeof(frase), stdin);
    for( i=0; frase [i]!='\0'; i++){
        if(frase[i] >= 'a' && frase [i]<='z'){
            contagem[frase[i]-'a']++;
        }
    }
    printf("Resultado:\n");
    for( i=0; i<26; i++){
        if(contagem[i]>0){
            printf("%c: %d\n", 'a'+ i, i+1);
        }
    }
    return 0;
}