#ifndef BUSCA_AMPLITUDE_H
#define BUSCA_AMPLITUDE_H

/* --------------------------- */
void buscaAmplitude(pDGrafo grafo, FuncaoComparacao fc, FuncaoImpressao fi){

    if (fc == NULL)
       fc = grafo->fc;

    if (fi == NULL)
       fi = grafo->fi;

    pDFila verticesPendentes = criarFila();

    pDLista verticesVisitados = criarLista();

    enfileirarInfo(verticesPendentes, grafo->listaVertices->primeiro->info);

    while(filaVazia(verticesPendentes) != 0){
        pVertice vAtual = desenfileirarInfo(verticesPendentes);

        if(contemInfo(verticesVisitados, vAtual, fc) == 0){
            fi(vAtual);
            incluirInfo(verticesVisitados, vAtual);
        }
        pNoh atual = vAtual->listaAdjacencias->primeiro;
        while(atual != NULL){
            pVertice vAux = (pVertice) atual->info;
            if (contemInfo(verticesVisitados, vAux, fc) == 0){
                enfileirarInfo(verticesPendentes, atual->info);
            }
            atual = atual->prox;  
        }
    }

}
#endif
