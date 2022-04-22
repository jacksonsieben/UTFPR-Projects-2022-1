int pilhasIguais (pDPilha pdP1, pDPilha pdP2, FuncaoComparacao pfc){
    pNoh atual, pNL2;

    pNL2 = pdP2->pdLista->primeiro;
    atual = pdP1->pdLista->primeiro;
    int count = 0;
    if(pdP1->pdLista->quantidade == pdP2->pdLista->quantidade){
        while(pNL2 != NULL){
            if(pfc(atual->info,pNL2->info)==1){
                return 1;
            }else{
                pNL2 = pNL2->prox;
                atual = atual->prox;
            }
        }
        return 0;
    }else{
        return 1;
    }

    
}