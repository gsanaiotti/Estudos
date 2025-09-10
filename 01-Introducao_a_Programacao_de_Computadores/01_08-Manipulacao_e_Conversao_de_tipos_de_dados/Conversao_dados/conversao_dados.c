#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.5;
    float resultado1 = a + b; // aqui, a é implicitamente convertida para o tipo float;
    int c = 3;
    float resultado2 = (float) a / c; // aqui, realizamos o casting para converter a explicitamente;
    
    printf("Resultado: %.2f\n", resultado1);
    printf("Resultado: %.2f\n", resultado2);

    return 0;
}

/*
Lembrete: sempre que houver a necessidade de converter tipos de dados, recomenda-se a conversão
explicita, para que seja facilmente identificável;
Deve-se sempre estudar a necessidade de se utilizar float ou double, com base no tamanho dos
números e nível de precisão necessário;
*/