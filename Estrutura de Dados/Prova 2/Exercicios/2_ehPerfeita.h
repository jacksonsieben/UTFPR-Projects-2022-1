int ehPerfeita ( pDArvore arvore){
    if(binariaRecursiva(arvore->raiz->direita) == 0 && binariaRecursiva(arvore->raiz->esquerda) == 0){ // se ambos os lados sao estritamente binarios
        if(alturaRecursiva(arvore->raiz->direita) == alturaRecursiva(arvore->raiz->esquerda)){ // se ambos os lados tem a mesma altura
            return 0; //eh perfeita
        }
    }
    return 1; //nao eh perfeita
}