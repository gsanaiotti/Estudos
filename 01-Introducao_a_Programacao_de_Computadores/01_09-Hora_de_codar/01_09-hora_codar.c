#include <stdio.h>

int main() {
    int nota1, nota2, nota3, nota4; //Declaração em int;
    float media; // Declaração em float;

    printf("\nDigite a primeira nota do ano letivo: ");
    scanf("%d", &nota1);

    printf("\nDigite a segunda nota do ano letivo: ");
    scanf("%d", &nota2);

    printf("\nDigite a terceira nota do ano letivo: ");
    scanf("%d", &nota3);

    printf("\nDigite a quarta nota do ano letivo: ");
    scanf("%d", &nota4);

    media = (float)(nota1 + nota2 + nota3 + nota4) / 4; // Utilizando casting para conversão explicita;
    printf("A média do aluno foi %.2f.", media);

    return 0;

    
}