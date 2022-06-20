int deadEndRecursivo (pNohArvore raiz, void *min, void *max, FuncaoComparacao fc){
    if(fc(min, max)==0){
        return 1;
    }

    int *newMin = (int *) min;

    int *newMax = (int *) max;

    *newMin++;
    *newMax--;

    return deadEndRecursivo(raiz->esquerda, min, newMax, fc) + deadEndRecursivo(raiz->direita, newMin, max, fc);
}

int deadEnd (pDArvore arvore, void *min, void *max, FuncaoComparacao pfc){
    return deadEndRecursivo(arvore->raiz, min, max, pfc);
}   