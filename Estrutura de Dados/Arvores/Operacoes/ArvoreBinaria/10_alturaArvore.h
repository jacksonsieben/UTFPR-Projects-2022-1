int alturaRecursiva(pNohArvore raiz){
    if(raiz==NULL){
        return 0;
    }
    if(raiz->esquerda == NULL && raiz->direita == NULL){
        return 1;
    }
    if(alturaRecursiva(raiz->esquerda) > alturaRecursiva(raiz->direita)){
        return 1 + alturaRecursiva(raiz->esquerda);
    }else{
        return 1 + alturaRecursiva(raiz->direita);
    }
}

int altura (pDArvore pArvore){
    return alturaRecursiva(pArvore->raiz);
}