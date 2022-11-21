//
// Created by Vitor Frango on 16/04/2022.
//

#include <stdio.h>

int main()
{
    float nota, nota_glob, soma_tot, exame;

    {
        printf("\nescreva  a nota: ");
        scanf("%f", &nota);

        if (nota  >=  3.50){

            printf("Epoca normal \n");
            printf("Escreva a nota do e-folio golbal \n");
            scanf("%f", &nota_glob);
            printf("Escreva a soma total das notas \n");
            scanf("%f", &soma_tot);

            if  (nota_glob  >=  5.50 && soma_tot >= 9.5){

                printf("Está aprovado");  }
            else
                printf("Terá de ir a recurso");

         }
        else
            printf("Epoca recurso, tera de ir a exame final\n");
            printf(" Qual o valor do exame? \n");
            scanf("%f", &exame);

            if  (exame >=9.5){

                printf("Está aprovado")     ;  }
            else
                printf("Reprovou à UC");
    }


    return 0;
}