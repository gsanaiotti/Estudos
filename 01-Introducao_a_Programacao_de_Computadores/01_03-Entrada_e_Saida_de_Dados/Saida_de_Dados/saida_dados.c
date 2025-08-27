#include <stdio.h>

int main() {

    //Sintaxe padrão da função printf:
    printf("Hello, World!\n");
    // printf("Texto com formatação", variavel1, variavel2, ...);
    // printf("Hello, World!\n");


    char nome[20] = "Guilherme";
    int idade = 28;
    float altura = 1.70;
    char opcao = 'S';

    printf("A idade do %s é: %d\n", nome, idade);
    printf("A altura é: %.2f\n", altura);
    printf("A opção é: %c\n", opcao);

}

/*
Especificadores do printf

%d: Imprime um inteiro no formato decimal;
%i: Equivalente a %d;
%f: Imprime um número de ponto flutuante no formato padrão (pode ter decimais limitados utilizando .xf, onde x é o número de casas decimais); 
%e: Imprime um número de ponto flutuante na notação científica (pode ter decimais limitados utilizando .xf, onde x é o número de casas decimais);
%c: Imprime um único caractere;
%s: Imprime uma cadeira (string) de caracteres.

*/