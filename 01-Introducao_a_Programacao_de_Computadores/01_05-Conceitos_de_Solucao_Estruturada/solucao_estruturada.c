// Modularidade e Abstração

/*
Modularidade diz respeito à divisão de um problemas em sua menor parte possível, para que
haja uma maneira mais fácil de planejar, programar e manter um determinado código;

No exemplo de uma função que receba, processe e devolva informações, separar o código em 3
blocos, cada um responsável por uma ação, garante que haja uma visualização mais clara sobre 
como resolver o problema.


Abstração diz respeito à focar, exatamente, no problema a ser resolvido.
Supondo que o código do exemplo acima resolva um problema de conversão de temperaturas de graus
Celsius para Fahrenheit e utilizando os conceitos de Modularidade e Abstração:

    entradaDados: será uma função unicamente responsável por receber os dados do input do usuário
    e garantir que estejam na tipagem correta;

    processaDados: recebe os dados corretos(que foram processados pela função entradaDados) e
    realiza a conversão para Fahrenheit, garantindo que a conversão foi realizada corretamente
    e que a tipagem está correta;

    saidaDados: recebe o valor convertido da função processaDados e exibe um printf com a 
    formatação correta;

Isto garante que cada problema seja isolado em sua própria função (modularidade) e que 
nenhuma função precise se preocupar com o que está acontecendo em outra (abstração).
*/