#include <stdio.h>
#include <stdlib.h>
#include "BubbleSort.h"

struct Data{
    int dia, mes, ano;
};

int* pegarTamanho(){
    int* tamanho = (int*) malloc(sizeof(int));
    printf("Informe o tamanho do vetor: ");
    scanf("%d", tamanho);

    return tamanho;
}

int* retornaData(){
    int *i[3]={1,2,3};

    return i;
}

void main(){
    //printf("%d", *pegarTamanho());
    int *vet[3];
    *vet = *retornaData();
    for (int i = 0; i < 3; i++)
    {
        printf("%d", *vet[i]);
    }
    
}