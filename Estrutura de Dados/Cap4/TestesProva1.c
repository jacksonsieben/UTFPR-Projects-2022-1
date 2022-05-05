#include <stdio.h>
#include "Fila.h"
#include "Pilha.h"
#include "ListaLinear/Lista.h"
#include "Utils.h"

int main() {
    pDLista pListaInt = criarLista();

    incluirInfo(pListaInt, alocaInt(5));
    incluirInfo(pListaInt, alocaInt(3));
    incluirInfo(pListaInt, alocaInt(9));
    incluirInfo(pListaInt, alocaInt(1));
    incluirInfo(pListaInt, alocaInt(2));
    printf("\nLista Original \n");
    imprimirLista(pListaInt, imprimeInt);

    printf("%d", pListaInt->quantidade);

    pDLista pListaFiltroInt = criarLista();

    pListaFiltroInt = filtrarLista(pListaInt, funcaoFiltroInt);
    printf("\nLista Original - Filtrada \n");
    imprimirLista(pListaInt, imprimeInt);
    printf("\nLista Filtro\n");
    imprimirLista(pListaFiltroInt, imprimeInt);
}