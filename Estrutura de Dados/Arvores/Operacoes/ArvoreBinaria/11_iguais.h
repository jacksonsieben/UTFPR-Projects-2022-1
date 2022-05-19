int iguaisRecursividade (pNohArvore pNoh1, pNohArvore pNoh2, FuncaoComparacao pfc){
    if(pNoh1==NULL && pNoh2==NULL){
        return 0;
    }else{
        if(pNoh1==NULL && pNoh2!=NULL || pNoh1!=NULL && pNoh2==NULL){
            return 1;
        }
        if(pfc(pNoh2->info, pNoh1->info)==0){
            return iguaisRecursividade(pNoh1->esquerda, pNoh2->esquerda, pfc) 
            + iguaisRecursividade(pNoh1->direita , pNoh2->direita , pfc);
        }else{
            return 1;
        }
    }
    
}

int iguais (pDArvore avr1, pDArvore avr2, FuncaoComparacao fc){
    if(iguaisRecursividade(avr1->raiz, avr2->raiz, fc)>0){
        return 1;
    }else{
        return 0;
    }
}