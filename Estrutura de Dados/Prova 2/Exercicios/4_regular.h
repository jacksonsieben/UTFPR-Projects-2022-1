int regular (pDGrafo grafo){
    pVertice vertice = (pVertice) grafo->listaVertices->primeiro;
    
    pNoh atual = grafo->listaVertices->primeiro->prox;

    int flag = 0;
    while(atual != NULL){
        pVertice vAtual = (pVertice) atual;
        if(vAtual->grau != vertice->grau){//grau = listaAdjacencias->quantidade
            flag = 1;
            break;
        }
        atual = atual->prox;
    }
    
    return flag; // if == 1 nao é regular

}