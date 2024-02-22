#include <stdio.h>
#include <string.h>

int main(){
    char nome[20] = "asdf";
    int idade;

    //Entrada de dados
    printf("\nEntre com seu nome: ");
    scanf("%s",nome);
    printf("Entre com sua idade: ");
    scanf("%d",&idade);

    printf("\n\n");

    //Saida de dados
    puts(nome);
    printf("%d",idade);
    return 0;
}