#ifndef EXCLUIR_VERTICE_H
#define EXCLUIR_VERTICE_H

/* --------------------------- */
void excluirVertice(pDGrafo grafo, void* info, FuncaoComparacao fc){

    if (fc == NULL)
       fc = grafo->fc;

    pVertice v = buscarVertice(grafo, info, fc);

    if(v == NULL){
        return NULL;
    }

    pNoh atual = v->listaAdjacencias->primeiro;
    
    while(atual != NULL){
        pVertice vAtual = (pVertice) atual->info;
        pNoh atualAdjacente = vAtual->listaAdjacencias->primeiro;
        while(atualAdjacente != NULL){
            if(fc(atualAdjacente->info, atual->info) == 0){
                excluirInfo(vAtual->listaAdjacencias, atualAdjacente->info, fc);
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
