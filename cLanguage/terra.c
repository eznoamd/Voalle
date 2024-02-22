#include <stdio.h>
#include <math.h>
#define pi 3.14159265359

int main(void){
    
    //Exemplo de criação de uma variavel int
    //Variavel que guarda o raio da Terra
    int raioTerra = 6371;

    //Exemplo basico de operação de variavel int
    //Outra variavel com o diametro da Terra
    int diametroTerra = 2*raioTerra;

    //Exemplo de saída de variavel simples
    printf("\nAqui o diametro da Terra: %d Km",diametroTerra);

    //Contante pi
    printf("\nValor de pi: %f",pi);
    
    //Outro exemplo de operação um pouco mais complexa junto da saida
    printf("\nVolume da terra: %f Km3\n\n",4/3*pi*(pow(raioTerra,3)));

    return 0;
}