#include <stdio.h>

int main() {
    float a = 5.5;
    float b = 2.2;

    float soma = a + b;
    float subtracao = a - b;
    float multiplicacao = a * b;
    float divisao = a / b; //Neste caso, pela declaração de inteiro, o decimal é descartado;

    printf("Soma: %.2f\n", soma);
    printf("Subtração: %.2f\n", subtracao);    
    printf("Multiplicação: %.2f\n", multiplicacao);
    printf("Divisão: %.2f\n", divisao); //Descartando o valor decimal;

}

