#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    char matricula[15];
    char endereco[100];
    char curso[50];
    char periodo[20];
    char disciplinas[200];
};

int main() {
    struct Aluno aluno;

    printf("Cadastro de Aluno\n");

    printf("Nome: ");
    gets(aluno.nome);

    printf("Idade: ");
    scanf("%d", &aluno.idade);

    printf("Matricula: ");
    getchar();
    gets(aluno.matricula);

    printf("Endereco: ");
    gets(aluno.endereco);

    printf("Curso: ");
    gets(aluno.curso);

    printf("Período: ");
    gets(aluno.periodo);

    printf("Disciplinas: ");
    gets(aluno.disciplinas);

    printf("\nInformações do Aluno:\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Matricula: %s\n", aluno.matricula);
    printf("Endereco: %s\n", aluno.endereco);
    printf("Curso: %s\n", aluno.curso);
    printf("Período: %s\n", aluno.periodo);
    printf("Disciplinas: %s\n", aluno.disciplinas);

    return 0;
}
