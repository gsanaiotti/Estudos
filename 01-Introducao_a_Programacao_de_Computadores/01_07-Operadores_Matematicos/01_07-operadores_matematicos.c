#include <stdio.h>

// Operadores matemáticos

int main(){
    int a = 5; // Operador de atribuição (=);
    int b = 3;

    int soma = a + b; // Operador Soma(+);
    int subtracao = a - b; // Operador subtração (-);
    int multiplicacao = a * b; // Operador multiplicação (*);
    int divisao = a / b; // Operador divisão (/);

    /*
    Operadores de atribuição contam ainda com:

        - Atribuição com soma (+=);
        - Atribuição com subtração (-=);
        - Atribuição com multiplicação (*=);
        - Atribuição com divisão (/=);
        
    Basicamente, atribui-se à variável o valor original dela, realizando a operação indicada 
    para encontrar o novo valor.
    
    Operadores de incremento

        - Aumenta o valor da variável em um (++): utilizado em loops;

        int i = 1;
        i++; i passa a ter valor 2;

    Pode ser usado como pŕe-incremento ou pós-incremento:

    Pré-incremento: 

    int a = 5;
    int b = ++a;
    Neste caso, ambos os valores terão o valor 6, pois a incrementação veio antes do uso da variável a;

    Pós-incremento:

    int a = 5;
    int b = a++;
    Neste caso, 5 permanece com valor 5, enquanto b passa a ter valor 6;

    A mesma lógica serve para o operador de decremento (--):

    Pré-decremento:

    int a = 5;
    int b = --a; 
    Tanto a quanto b tem valor 4;

    Pós-decremento:

    int a = 5;
    int b = a--;
    A recebe 4, b recebe 5;
    
    */

    int c = 5;
    printf("c: %d\n", c);
    int d = c--;

    printf("c: %d\n", c);
    printf("d: %d\n", d);
    return 0;



}