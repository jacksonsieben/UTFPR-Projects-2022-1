#include <stdio.h>
#include "Utils.h"
#include "Pilha.h"

int main(){
    pDPilha pPilhaInt1 = criarPilha();
    pDPilha pPilhaInt2 = criarPilha();

    empilharInfo(pPilhaInt1, alocaInt(5));
    empilharInfo(pPilhaInt1, alocaInt(4));
    empilharInfo(pPilhaInt1, alocaInt(8));
    empilharInfo(pPilhaInt1, alocaInt(0));
    empilharInfo(pPilhaInt1, alocaInt(7));


    empilharInfo(pPilhaInt2, alocaInt(5));
    empilharInfo(pPilhaInt2, alocaInt(3));
    empilharInfo(pPilhaInt2, alocaInt(9));
    empilharInfo(pPilhaInt2, alocaInt(1));
    empilharInfo(pPilhaInt2, alocaInt(2));

    printf("\nPilha 1\n");
    imprimirLista(pPilhaInt1->pdLista, imprimeInt);

    printf("\nPilha 2\n");
    imprimirLista(pPilhaInt2->pdLista, imprimeInt);

    pDPilha pPilhaIntersec = criarPilha();
    pPilhaIntersec = interseccao(pPilhaInt1, pPilhaInt2, comparaInt);

    printf("\nPilha Interseccao\n");
    imprimirLista(pPilhaIntersec->pdLista, imprimeInt);

}