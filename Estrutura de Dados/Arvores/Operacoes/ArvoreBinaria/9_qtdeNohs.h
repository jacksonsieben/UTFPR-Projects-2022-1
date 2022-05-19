int qtdeNohsRecursiva (pNohArvore raiz){
    if (raiz == NULL){
        return 0;
    }

    if (raiz->esquerda == NULL && raiz->direita == NULL){
      return 1; /*  � uma folha */
    }

    return 1 + quantidadeFolhas(raiz->esquerda) +
               quantidadeFolhas(raiz->direita);
}

int qtdeNohs (pDArvore pArvore){
    return qtdeNohsRecursiva(pArvore->raiz);
}