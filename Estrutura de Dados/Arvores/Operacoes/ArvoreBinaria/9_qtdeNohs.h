int qtdeNohsRecursiva (pNohArvore raiz){
    if (raiz == NULL){
        return 0;
    }

    if (raiz->esquerda == NULL && raiz->direita == NULL){
      return 1; /*  é uma folha */
    }

    return 1 + qtdeNohsRecursiva(raiz->esquerda) +
               qtdeNohsRecursiva(raiz->direita);
}

int qtdeNohs (pDArvore pArvore){
    return qtdeNohsRecursiva(pArvore->raiz);
}