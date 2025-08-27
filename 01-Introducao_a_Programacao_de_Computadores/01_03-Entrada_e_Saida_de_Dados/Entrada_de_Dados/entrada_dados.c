#include <stdio.h>

int main() {

    //Sintaxe padrão da função scanf:
    // scanf("formato1", "formato2", &variavel1, variavel2, ...);

    char nome[20] = "Guilherme";
    int idade = 28;
    float altura = 1.70;
    char opcao = 'S';

    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("O nome inserido é %s\n", nome);
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade inserida é %d\n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A idade inserida é %.2f\n", altura);

    printf("Qual a opção escolhida:");
    scanf(" %c", &opcao);
    printf("A opcao escolhida foi: %c\n", opcao);
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


/*
Para strings que contenham espaço, a melhor opção acaba sendo utilizar a função fgets

Ela lê a linha inteira, incluindo espaços, até encontrar o '\n' ou atingir o tamanho declarado.

    char nome[50];
    printf("Digite seu nome completo: ");
    fgets(nome, 50, stdin); //Lê até 49 caracteres da entrada padrão (stdin)

//fgets inclui o '\n' na string, então é possível removê-lo:

    nome[strcspn(nome, "\n")] = 0;
    printf("Nome completo digitado: %s\n", nome);

fgets recebe três argumentos:
    
    1. O array onde a string será armazenada(variável);
    2. O tamanho máximo da string(incluindo '\n' e '\0');
    3. O fluxo de entrada(geralmente stdin para a entrada padrão do teclado).

*/