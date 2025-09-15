#include <stdio.h>

int main(){
    /*
    Operadores relacionais são fundamentais, pois permitem a comparação entre variáveis. São usados para 
    estabelecer relações entre valores, retornando valores booleanos (True (1), False (0)).
    
    Principais operadores relacionais:
    
    a > b (maior que);
    a < b (menor que);
    a >= b (maior ou igual a);
    a <= b (menor ou igual a);
    a == b (igual a);
    a != b (diferente de);
    
    */

    int a = 20;
    int b = 20;

    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    
    //Comparações implícitas
    
    int x = 5;
    float y = 5.0;
    char c = 'a';

    printf("x >= y: %d\n", x >= y);
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);

    printf("x >= c: %d\n", x >= c); // Esta comparação é possível, pois char c utiliza o valor da tabela ASCII
    printf("O valor ASCII de %c é: %d\n", c, c);
    
    // Comparações explícitas (casting)

    float numero1 = 10.2;
    int numero2 = 10;

    printf("Número1 > Número2: %d\n", (int) numero1 > numero2); // Utilizando casting para descartar decimal
    printf("Número1 == Número2: %d\n", (int) numero1 == numero2); // Utilizando casting para descartar decimal

    return 0;
}