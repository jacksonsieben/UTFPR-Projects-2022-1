int binariaRecursiva(pNohArvore raiz){
    if(raiz->esquerda == NULL && raiz->direita == NULL){
        return 0;
    }
    if((raiz->esquerda != NULL && raiz->direita == NULL) || (raiz->esquerda == NULL && raiz->direita != NULL)){
        return 1;
    }
    return binariaRecursiva(raiz->esquerda)
        +  binariaRecursiva(raiz->direita);
}

int estritamenteBinaria(pDArvore arvore){
    return binariaRecursiva(arvore->raiz);
}