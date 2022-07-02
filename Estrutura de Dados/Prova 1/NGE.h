pDLista NGE (pDFila fila, FuncaoComparacao fc){
    pDLista listaNGE = criarLista();

    pNoh atual = fila->pdLista->primeiro;
    pNoh aux = atual;

    pNge nge =  malloc(sizeof(pNge));

    void *naoTem = (int *) -1;

    while(aux != NULL){
        nge->info = aux->info;
        while(atual != NULL){
            if(fc(atual->info, aux->info)>0){
                nge->nge = atual->info;
            }
            atual =  atual->prox;
        }
        if(nge->nge==NULL){
            nge->nge = naoTem;
        }
        incluirInfo(listaNGE, nge);
        aux = aux->prox;
    }
    return listaNGE;
}