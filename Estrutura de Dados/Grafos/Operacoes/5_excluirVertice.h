#ifndef EXCLUIR_VERTICE_H
#define EXCLUIR_VERTICE_H

#include <stddef.h>

/* --------------------------- */
void excluirVertice(pDGrafo grafo, void* info, FuncaoComparacao fc){

    if(fc == NULL)
       fc = grafo->fc;

    pVertice v = buscarVertice(grafo, info, NULL);

    pNoh atual = v->listaAdjacencias->primeiro;
    
    while(atual != NULL){
        pVertice vAtual = (pVertice) atual->info;
        pNoh atualAdjacente = vAtual->listaAdjacencias->primeiro;
        while(atualAdjacente != NULL){
            if(grafo->fc(atualAdjacente->info, atual->info) == 0){//sem grafo->fc comparando vertice com funcao de inteiros
                printf("aq2");
                pVertice vAdjacente = (pVertice) atualAdjacente->info;
                excluirInfo(vAtual->listaAdjacencias, atualAdjacente, grafo->fc);
                //printf("sadsd %d",  vAtual->listaAdjacencias->quantidade);
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
