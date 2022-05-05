int iguais (pDPilha pDP1, pDPilha pDP2, FuncaoComparacao pfc){
    pNoh atual, pNL2;

    pNL2 = pDP2->pdLista->primeiro;
    atual = pDP1->pdLista->primeiro;
    int count = 0;
    int flag = 0;
    if(pDP1->pdLista->quantidade == pDP2->pdLista->quantidade){
        while(pNL2 != NULL){
            while(atual != NULL){
                if(pfc(atual->info,pNL2->info)==0){
                    flag = 1;  
                    break;
                }
                atual= atual->prox;
            }
            if(flag == 0){
                return 1;
            }
            pNL2 = pNL2->prox;
        }
        return 0;
    }else{
        return 1;
    }
}