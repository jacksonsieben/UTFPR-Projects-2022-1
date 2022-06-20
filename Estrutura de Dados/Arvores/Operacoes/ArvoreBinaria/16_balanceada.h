int balanceadaRecursiva (pNohArvore raiz){
    if(raiz==NULL){
        return 0;
    }
    if(raiz->esquerda == NULL && raiz->direita == NULL){
        return 1;
    }
    if(balanceadaRecursiva(raiz->esquerda) > balanceadaRecursiva(raiz->direita)){
        return 1 + balanceadaRecursiva(raiz->esquerda);
    }else{
        return 1 + balanceadaRecursiva(raiz->direita);
    }
}

int balanceada (pDArvore arvore){
    int diferenca = balanceadaRecursiva(arvore->raiz->direita) - balanceadaRecursiva(arvore->raiz->esquerda);
    switch (diferenca){
        case  0: return 0; break;
        case  1: return 0; break;
        case -1: return 0; break;
        default: return 1; break;
    }
}