#include <stdio.h>
//funções
float soma(float a , float b);
float sub(float a , float b);
float mult(float a , float b);
float div(float a , float b);

int main(){
    int opcao;
    float num1 , num2, resultado;
        // Menu da calculadora
    do{
    printf("\n============== Calculadora =================");
    printf("\n by: bruh.");
    printf("1-- Soma\n");
    printf("2-- Subtracao\n");
    printf("3-- multiplicacao\n");
    printf("4-- divisao\n");
    printf("0-- Sair\n");
    printf("Escolha uma opcao: \n");
    scanf("%d", &opcao);


        // implementto das opcoes no codigo
    if (opcao >= 1 && opcao <=4){
        printf("Digite seu primeiro numero: ");
        scanf("%f", &num1);

        printf("Digite o segundo  numero: ");
        scanf("%f", &num2);
    }

    switch(opcao){
        case 1:
        resultado = soma (num1, num2);
        printf("Resultado: %2.f\n", resultado);
        break;

        case 2:
        resultado = sub (num1, num2);
        printf("Resultado: %2.f\n", resultado);
        break;

        case 3:
        resultado = mult (num1, num2);
        printf("Resultado: %2.f\n", resultado);
        break;

        case 4:
        if (num2== 0){
        printf("ERRO! Nao existe divisao por zero man kkk");
        }else{
            resultado = div(num1 , num2);
            printf("Resultado: %f\n", resultado);
        }
        break;

        case 0:
        printf("===========Encerrando a calculadora========");
        printf(" Da uma moral ai e sobe a esrtrelinha no github <3");
        break;

        default:
        printf("Opcao invalida parceiro\n");
        printf(" Ta chapano??");        

    }



    }while (opcao!= 0);
    return 0; 
    
}
// Implementando  as funçoes 

float soma(float a , float b) {
    return a + b;
}


float sub(float a , float b) {
    return a- b;
}



float mult(float a , float b) {
    return a * b;
}



float div(float a , float b) {
    return a / b;
}



