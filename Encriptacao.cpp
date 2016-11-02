#include <stdio.h>

int main()
{

    // Tabela de encriptacao

    char encriptacao[][59] = {" ", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "X", "Y", "W", "Z", "a", "b", "c", "d", "e", "f", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "x", "y", "w", "z"};

    // Fim da tabela de encriptacao

    printf("Qual o tamanho do que quer encriptar?\n");
    int tamanho;
    scanf("%d", &tamanho);

    printf("Introduza o que quer encriptar\n\n");

    // Parte que vai fazer a leitura da string

    char input[][tamanho]={};

    int x = 1;

    do
    {
        scanf("%1c", &input[x]);

        x++;

    } while(x<= tamanho);

printf("%c", input[1]);

    // Fim da parte que vai fazer a leitura da string

    return 0;
}
