#include <stdio.h>

int main (){
    /*
    Modificadores de tipos de dados

    São usados para alterar propriedades dos tipos de dados primitivos, permitindo manipulação mais precisa e 
    eficiente das variáveis;

    os mais comuns em C são: unsigned, long, short e signed
    */

    /*
    unsigned -> utilizado para declarar variáveis que podem armazenar apenas valores positivos, incluindo o 0;
        ex.: int normal pode armazenar entre -2,147,483,648 e 2,147,483,647;
            unsigned int pode armazenar entre 0 e 4,294,967,295;
            char normal pode armazenar entre -128 e 127;
            unsigned char pode armazenar entre 0 e 255.
    */
    int numerocomSinal = 3000000000;
    unsigned int numeroSemSinal = 3000000000;

    printf("Número com sinal: %d\n Número sem sinal: %u\n", numerocomSinal, numeroSemSinal); // Declara-se unsigned com %u
    
    /*
    long -> utilizado para armazenar valores positivos, acima da capacidade de armazenamento dos dados primitivos.
    Pode ser aplicado à int e double.

    Há ainda a variação long long int que pode armazenar o dobro do valor do long;

    %li ou %ld e %lld e %lli são os especificadores de formato;
    */

    int numeroNormal = 2147483647;
    long long int numeroGrande = 2147483647;

    printf("Número normal: %d\n", numeroNormal);
    printf("Número grande: %lld\n", numeroGrande);

    double numeroPreciso = 3.141592653589793;
    long double numeroMuitoPreciso = 3.141592653589793238463;

    printf("Número preciso: %.15f\n", numeroPreciso);
    printf("Número muito preciso: %.21Lf\n", numeroMuitoPreciso); //Ultimas 6 casas saem com valor errado
    
    unsigned long int numeroGrandePositivo = 4000000000;
    unsigned int numeroPositivo = 4000000000;
    long int numeroGrandao = 4000000000;
    int numero = 4000000000;

    printf("Número grande positivo: %lu\n", numeroGrandePositivo);
    printf("Número positivo: %u\n", numeroPositivo);
    printf("Número grande: %ld\n", numeroGrandao);
    printf("Número: %d\n", numero);

    /*
    short -> Oposto do modificador long, serve para "limitar" as variáveis entre -32768 e 32767. Serve para para int.*/
    short int numeroPequeno = 32767;
    printf("Número pequeno (short int): %d\n", numeroPequeno);
    numeroPequeno = 32768;
    printf("Número pequeno atualizado (signed): %d\n", numeroPequeno);
    

    /*
    Algumas dicas sobre modificadores de tipos de dados:
    
    1- Escolha o tipo de dado apropriado e use modificadores de tipos de dados primitivos para armazenar valores que estão fora dos padroes dos dados primitivos;
    2 - Verifique a compatibilidade de tipos (e converta, quando necessário);
    3 - Use especificadores de formato corretos;
    4 - Verifique o tamanho do tipo de dados para o ambiente/compilador;
    5 - Considere o ambiente de desenvolvimento.
    */
}