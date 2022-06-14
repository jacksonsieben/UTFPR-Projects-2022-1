#ifndef EXCLUIR_ARESTA_H
#define EXCLUIR_ARESTA_H

/* --------------------------- */
void excluirAresta(pDGrafo grafo, void *vOrig, void *vDest, FuncaoComparacao fc){
    if(fc == NULL)
        fc = grafo->fc;

    pVertice vOrigem = buscarVertice(grafo, vOrig, NULL);

    pNoh atual = vOrigem->listaAdjacencias->primeiro;

    while(atual != NULL){
        pVertice vAtual = (pVertice) atual->info;
        
        if(fc(vAtual->info, vDest) == 0){
            excluirInfo(vOrigem->listaAdjacencias, atual->info, fc);
            break;
        }
        printf("aq4");
        atual = atual->prox;
    }
}

#endif
