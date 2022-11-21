/*

 Algoritmo de cifra simetrica
 EFolioA - Segurança de redes e computadores

 1 - Pedir uma mensagem e guardar numa array
 2 - cifrar a  mensagem atraves de uma qualquer formula matematica ((2022*11)/30^2) aplicada ao correspondente
    codigo ASCII de cada caracter introduzido
 3 - imprimir o resultado da formula aplicada a cada caracter
 4 - Pedir para introduzir o codigo que devera reverter a cifra para a mensagem original
 5 - Imprimir a mensagem original
*/


#include<stdio.h>
#include<string.h>



int main(){
    char  mesg[999];
    char  chave[] = "CIFRA";
    char  nova_chave [100];
    char  mensagem_cifra[999];
    int   mensagem_decifra[999];
    int   tama_msg;
    int   i, j;
    char msg_tama = strlen (mesg);




    //pede ao user uma mensagem e grava
    printf("\n Escreva a mensagem (até 999 caracteres) a ser cifrada: \n ");
    scanf("%[^\n]", &mesg);

    // Avalia o tamanho da mensagem e percorre a string onde a mesma esta gravada
    // aplicando Cifra Simétrica  de Substituição –  Vigenère Cipher
    tama_msg = strlen(mesg);

    for( i = 0, j = 0; i < tama_msg; ++i, ++j){
        if(j == msg_tama)
            j = 0;

        nova_chave[i] = chave[j];
    }
    nova_chave[i] = '\0';


    for (i = 0; i < tama_msg; ++i)
        mensagem_cifra[i] = ((mesg[i] + nova_chave[i]) % 26) + 'A';

   mensagem_cifra[i] = '\0';


    // volta a percorrer a string para inprimir a mensagme mas no seu correspondente
    // codigo ASCII apos aplicaa uma formula
    printf (" A sua mensagem cifrada é: \n ");
    for( i=0; i<msg_tama; i++)
        printf("%s ", mensagem_cifra[i]);


    //reverte a mensagem cifrada efectuando o processo inverso , pedindo para esse efeito
    // a introdução do codigo gerando anteriormente

    printf("\n Digite o codigo para reverter a cifra:\n");
    for( i=0; i<tama_msg; i++)
        scanf("%d[^\n] ",&mensagem_cifra[i]);


    for( i=0;i<tama_msg;i++)
    {
        mesg[i] = (int)(mensagem_cifra[i])/(((2022*11)/30^2));
    }

    printf("\n A mensagem original é :\n %s \n", mesg);


    return 0;
}