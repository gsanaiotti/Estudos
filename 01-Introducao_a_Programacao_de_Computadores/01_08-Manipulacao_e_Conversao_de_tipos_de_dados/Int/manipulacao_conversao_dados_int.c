#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;

    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;
    int divisao = a / b; //Neste caso, pela declaração de inteiro, o decimal é descartado;

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);    
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %d\n", divisao); //Descartando o valor decimal;

}