#include <stdio.h>
#include "Utils.h"
#include "Fila.h"
#include "Pilha.h"

int main(){
    pDFila pFilaInt = criarFila();

    // teste de enfileiramento //
    /*enfileirarInfo(pFilaInt, alocaInt(5));
    enfileirarInfo(pFilaInt, alocaInt(3));
    enfileirarInfo(pFilaInt, alocaInt(9));
    enfileirarInfo(pFilaInt, alocaInt(1));
    enfileirarInfo(pFilaInt, alocaInt(2));

    // teste de desenfileiramento //
    /*void *info = desenfileirarInfo(pFilaInt);
    printf("\nRetirou o inteiro = %d \n", *((int*)info));

    void *info;
    imprimirLista(pFilaInt->pdLista, imprimeInt);

    printf("\nDesinfileirar Fila\n");
    
    while (filaVazia(pFilaInt)==0){
        info = desenfileirarInfo(pFilaInt);
        printf("%d - ", *((int*)info));
    }*/
    void *info;

    enfileirarInfo(pFilaInt, alocaInt(5));
    enfileirarInfo(pFilaInt, alocaInt(3));
    enfileirarInfo(pFilaInt, alocaInt(9));
    enfileirarInfo(pFilaInt, alocaInt(1));
    enfileirarInfo(pFilaInt, alocaInt(2));

    printf("\nFila Original\n");
    imprimirLista(pFilaInt->pdLista, imprimeInt);

    inverteFila(pFilaInt);

    printf("\nFila Invertida\n");

    printf("\nCopia da Fila\n");

    pDFila copiaFila = copiarFila(pFilaInt, alocaInfoInt);
    imprimirLista(copiaFila->pdLista, imprimeInt);

    printf("\nTroca na Fila\n");

    trocaFila(copiaFila,4, 2);
    imprimirLista(copiaFila->pdLista, imprimeInt);

    printf("\nPalavra Palindroma\n");
    char *palavra = "arara";
    int igual = palindroma(palavra);
    if(igual == 1){
        printf("\nAs palavras sao um palindromo!");
    }else{
        printf("\nAs palavras nao sao um palindromo!");
    }

    
}
