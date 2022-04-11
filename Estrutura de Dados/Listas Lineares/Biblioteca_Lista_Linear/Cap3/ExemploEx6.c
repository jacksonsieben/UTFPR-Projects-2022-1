#include <stdio.h>
#include <stdlib.h>
#include "Utils.h"
#include "Lista.h"

void main(){
    pDLista pLista1 = criarLista();

    incluirInfo(pLista1, alocaInt(5));
    incluirInfo(pLista1, alocaInt(3));
    incluirInfo(pLista1, alocaInt(9));
    incluirInfo(pLista1, alocaInt(1));
    incluirInfo(pLista1, alocaInt(2));
    incluirInfo(pLista1, alocaInt(7));
    incluirInfo(pLista1, alocaInt(8));
    incluirInfo(pLista1, alocaInt(6));
    printf("\nLista 1\n");
    imprimirLista(pLista1, imprimeInt);

    pDLista pLista2 = criarLista();

    incluirInfo(pLista2, alocaInt(8));
    incluirInfo(pLista2, alocaInt(9));
    incluirInfo(pLista2, alocaInt(0));
    incluirInfo(pLista2, alocaInt(6));
    incluirInfo(pLista2, alocaInt(4));
    incluirInfo(pLista2, alocaInt(10));

    printf("\nLista 2\n");
    imprimirLista(pLista2, imprimeInt);

    pDLista duplicacaoLista1; 
    duplicacaoLista1 = duplicarLista(pLista1, alocaInfoInt);

    printf("\nDuplicando lista 1...\n");
    imprimirLista(duplicacaoLista1, imprimeInt);

    pDLista uniaoListas = unirLista(pLista1, pLista2, comparaInt, alocaInfoInt);
    
    printf("\nUnindo listas...\n");
    imprimirLista(uniaoListas, imprimeInt);

    pDLista listaIntersecao = intersecaoLista(pLista1, pLista2, comparaInt);
    printf("\nIntersecao Listas\n");
    imprimirLista(listaIntersecao, imprimeInt);


    pDLista listaDivididaPorValor = dividirListaValor(uniaoListas, comparaInt, alocaInt(1));

    printf("\nDividindo listas no 1...\n");
    printf("Listas original...\n");
    imprimirLista(uniaoListas, imprimeInt);
    printf("\nListas dividida...\n");
    imprimirLista(listaDivididaPorValor, imprimeInt);

    int listaDisjunta = disjuncaoLista(uniaoListas, listaDivididaPorValor, comparaInt);
    if(listaDisjunta == 0){
        printf("\nListas contem coisas em comum");
    }else{
        printf("\nListas nao contem coisas em comum");
    }

    incluirInfo(pLista1, alocaInt(9));
    int contidaLista = contidaNaLista(listaIntersecao, pLista1, comparaInt);
    if(contidaLista == 1){
        printf("\nListas intersecao contem na lista 1");
    }else{
        printf("\nListas intersecao nao contem na lista 1");
    }

    printf("\nLista 1\n");
    imprimirLista(pLista1, imprimeInt);

    inverterLista(pLista1, alocaInfoInt);
    printf("\nLista 1 Invertida\n");
    imprimirLista(pLista1, imprimeInt);

    printf("\nLista 1 recursiva\n");
    imprimirListaRecursiva(pLista1, imprimeInt);
}