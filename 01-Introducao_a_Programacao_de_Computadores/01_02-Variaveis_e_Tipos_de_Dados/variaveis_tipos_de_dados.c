#include <stdio.h>

int main() {
    // Variaveis em C sempre são desta forma: "tipo nome;"

    int idade; // armazena valores inteiros;
    float altura; // armazena valores decimais (armazena valores menores, com menor precisão);
    double peso; // armazena valores decimais (armazena valores maiores, aumenta precisão);
    char letra; // armazena caracteres únicos, deve ser inicializada com valor entre aspas simples (');
    char nome[20] = "Guilherme"; // armazena uma string utilizando um array de 'char', 20 no caso, e deve ser inicializada com valores entre aspas duplas (");

    idade = 25;
    altura = 1.75;
    peso = 98.75;
    letra = 'G';
    
    return 0;
}
/* 
Geralmente, utiliza-se double para valores maiores que necessitam de uma precisão maior, enquanto que float é utilizado para valores mais simples.

Uma boa prática é inicializar as variáveis, para evitar que haja "lixo" armazenado no espaço de memória da variável.

Posso inicializar a variável direto na declaração ou no decorrer do código, mas após a declaração não é necessário declarar o tipo de dado.

*/