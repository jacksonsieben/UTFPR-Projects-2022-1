#ifndef IMPRIMIR_LISTA_RECURSIVA_H
#define IMPRIMIR_LISTA_RECURSIVA_H

void imprimirRecursiva(pNoh aux, FuncaoImpressao fi){
    if(aux == NULL){
        return;
    }
    imprimirRecursiva(aux->prox, fi);
    fi(aux->info);
}

void imprimirListaRecursiva(pDLista pd, FuncaoImpressao fi){
    imprimirRecursiva(pd->primeiro, fi);
}

#endif