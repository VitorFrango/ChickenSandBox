//
// Created by Vitor Frango on 30/04/2022.
//

#include <stdio.h>

int main()

{
    int a, b, r;

    printf ("Escreva o conjunto A \n");
    scanf ("%f", &a);

    printf ("Escreva o conjunto B \n");
    scanf ("%f", &b);


          while(b != 0){
                   r = a % b;
                   a = b;
                   b = r;

        }

        printf("o mdc (a,b) = mdc (b,r): a,b,b,aux1\n");
    
    return 0;
}