#include <stdio.h>
struct aluno{
    int id;
    char nome [40];
};
  struct aluno aluno;
int main(){

    printf("id: ");
    scanf("%d" , &aluno.id);
    printf("Nome: ");
    scanf("%s" , &aluno.nome);

    printf("Dados finais:");
    printf("nome: %s", aluno.nome);
    printf("id: %d", aluno.id);
    return 0;

}