#ifndef EXCLUIR_VERTICE_H
#define EXCLUIR_VERTICE_H

#include <stddef.h>

/* --------------------------- */
void excluirVertice(pDGrafo grafo, void* info, FuncaoComparacao fc){

    if(fc == NULL)
       fc = grafo->fc;

    pVertice v = buscarVertice(grafo, info, NULL);

    pNoh vertice = (pNoh) v;

    pNoh atual = grafo->listaVertices->primeiro;
    
    while(atual != NULL){
        pVertice vAtual = (pVertice) atual->info;
        pNoh atualAdjacente = vAtual->listaAdjacencias->primeiro;
        while(atualAdjacente != NULL){
            
            if(grafo->fc(atualAdjacente->info, v) == 0){
                pVertice vAdjacente = (pVertice) atualAdjacente->info;
                excluirInfo(vAtual->listaAdjacencias, atualAdjacente->info, grafo->fc);
                break;
            }
            atualAdjacente = atualAdjacente->prox;
        }
        atual = atual->prox;
    }

    destruirLista(v->listaAdjacencias);
    excluirInfo(grafo->listaVertices, v, fc);
    free(v);
}
#endif
