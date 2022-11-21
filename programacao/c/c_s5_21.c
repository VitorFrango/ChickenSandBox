//
// Created by Vitor Frango on 30/08/2022.
//

#include <stdio.h>

int main () {

    int num1, num2, xuxa, soma=0;

    printf("Escreva um intervalo de 2 numeros;\n  ");
    scanf("%d%d", &num1, &num2);

    if (num2>num1){
        for (xuxa=num1; xuxa<=num2; xuxa++ )
            soma = xuxa + soma ;
        printf("Escreva xuxa %d \n", soma);


    } else{
        printf("O primeiro numero introduzido tem de ser menor que o segundo");
    }
    return 0;
}