#include <stdio.h>

int main() {
    char nome[50];
    int idade, matricula;
    float altura;

    printf("Digite o nome do(a) aluno(a): \n");
    scanf(" %s", nome); // utiliza-se %s devido à ser uma string;

    printf("Digite a matrícula do(a) aluno(a): \n");
    scanf(" %d", &matricula); // utiliza-se %d devido à ser um valor inteiro;

    printf("Digite a idade do(a) aluno(a): \n");
    scanf(" %d", &idade); // utiliza-se %d devido à ser um valor inteiro;

    printf("Digite a altura do(a) aluno (a): \n");
    scanf(" %f", &altura); // utiliza-se %f devido à ser um valor com ponto flutuante;

    printf("Cadastro realizado com sucesso!\n\n");
    printf("Nome do (a) aluno(a): %s\n", nome);
    printf("Matrícula do(a) aluno(a): %d\n", matricula);
    printf("Idade do(a) aluno(a): %d\n", idade);
    printf("Altura do(a) aluno(a): %.2f\n", altura);

    return 0;
}