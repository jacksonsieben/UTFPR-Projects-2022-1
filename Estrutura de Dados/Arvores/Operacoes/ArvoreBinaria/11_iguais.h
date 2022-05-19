int iguaisRecursividade (pNohArvore pNoh1, pNohArvore pNoh2, FuncaoComparacao pfc){
    if(pNoh1==NULL && pNoh2==NULL){
        return 0;
    }
    if(pfc(pNoh1->info, pNoh2->info)>0){
        
    }
}

int iguais (pDArvore avr1, pDArvore avr2, FuncaoComparacao fc){
    if(iguaisRecursividade>0){
        return 1;
    }else{
        return 0;
    }

}