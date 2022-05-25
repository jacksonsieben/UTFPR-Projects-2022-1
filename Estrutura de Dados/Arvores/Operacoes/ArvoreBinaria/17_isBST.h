int recursividade ( pNohArvore raiz, void* info, FuncaoComparacao pfc){
    if(raiz == NULL){
        return 1;
    }
    if(pfc(info, raiz->info)==0){
        return 0;
    }else if(pfc(info, raiz->info)>=0){
        return recursividade(raiz->esquerda, info, pfc);
    }else{
        return recursividade(raiz->direita, info, pfc);
    }
    
}

int isBST (pDArvore arvore, void* minValue, void* maxValue, FuncaoComparacao fc){
    return recursividade(arvore->raiz, minValue, fc) + recursividade(arvore->raiz, maxValue, fc);
}