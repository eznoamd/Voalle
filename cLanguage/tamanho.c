#include <stdio.h>

int main(void){
    
    int inteiro = 1;
    char caracter = 'a';
    float decimal = 2.11;
    int vetor[5] = {1,2,3,4,5};

    int ti = sizeof(inteiro);
    int tc = sizeof(caracter);
    int td = sizeof(decimal);
    int tv = sizeof(vetor);

    printf("\n\nTamanho das variaveis:\n\n--------------------------------------------\n\n");
    printf("inteiro: %d bytes\n",ti);
    printf("inteiro: %d bytes\n",tc);
    printf("inteiro: %d bytes\n",td);
    printf("inteiro: %d bytes\n\n",tv);

    return 0;
}