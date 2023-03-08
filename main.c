#include <stdio.h> 
#include <stdlib.h>
#include "input.h"

int calculator(int,int,char);

int main() {

    int n1, n2;
    char op;

    printf("Calculadora\n");
    do
    {
        printf("Introduza o 1º número inteiro: ");

    } while (!readInteger(&n1));

    do
    {
            
        printf("Introduza o 2º número inteiro: ");

    } while (!readInteger(&n2));

    do
    {
        printf("Introduza um operador aritmético (+, -, *, /): ");
        scanf("%c", &op);
        getchar(); //"consome" todos os caracteres que restarem no input buffer
    } while (op != '+' && op != '-' && op != '*' && op != '/');

    int result = calculator(n1,n2,op);
    printf("Resultado da operação aritmética: %.2f\n", (double)result);

    return EXIT_SUCCESS;
}


int calculator (int n1, int n2, char op){

    int result = 0;
    
    switch (op)
    {
    case '+':
        result = n1 + n2;
        break;
    case '-':
        result = n1 - n2;
        break;
    case '*':
        result = n1 * n2;
        break;
    case '/':
        result = n1 / n2;
        break;
    default:
        return 1;
    }

    return result;
}