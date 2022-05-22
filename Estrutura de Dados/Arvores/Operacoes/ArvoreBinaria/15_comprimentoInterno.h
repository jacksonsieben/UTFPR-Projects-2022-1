int comprimentoRecursivo (pNohArvore raiz){
    if (raiz == NULL){
        return 0;
    }

    return 1 + comprimentoRecursivo(raiz->esquerda)
             + comprimentoRecursivo(raiz->direita);
}

int comprimentoInterno (pDArvore arvore){

    return comprimentoRecursivo(arvore->raiz) - 1;
    //*? return qtdeNohs(arvore) - 1; // solucao bem mais simples
}