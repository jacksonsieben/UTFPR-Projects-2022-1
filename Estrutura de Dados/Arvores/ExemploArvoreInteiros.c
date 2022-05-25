#include <stdio.h>
#include "Utils.h"
#include "ArvoreBinaria.h"

int main(){
    /*pDArvore pArvoreInt = criarArvore(2);

    /* teste de inclusao */
    /*incluirInfo(pArvoreInt, alocaInt(5), comparaInt);
    incluirInfo(pArvoreInt, alocaInt(3), comparaInt);
    incluirInfo(pArvoreInt, alocaInt(9), comparaInt);
    incluirInfo(pArvoreInt, alocaInt(1), comparaInt);
    incluirInfo(pArvoreInt, alocaInt(2), comparaInt);

    emOrdem(pArvoreInt->raiz, imprimeInt);
    printf("\n");
/*
    preOrdem(pArvoreInt->raiz, imprimeInt);
    printf("\n");
    posOrdem(pArvoreInt->raiz, imprimeInt);
*/
    /* teste de exclusao */
    /*int res = excluirInfo(pArvoreInt, alocaInt(3), comparaInt);
    printf("\nExcluiu? = %d \n", res);

    emOrdem(pArvoreInt->raiz, imprimeInt);
    printf("\n");

    int folhas = quantidadeFolhas(pArvoreInt->raiz);
    printf("\nQuantidade de folhas = %d \n", folhas);*/

    pDArvore pArvoreInt = criarArvore(2);

    /* teste de inclusao */
    incluirInfo(pArvoreInt, alocaInt(5), comparaInt);
    incluirInfo(pArvoreInt, alocaInt(3), comparaInt);
    incluirInfo(pArvoreInt, alocaInt(9), comparaInt);
    incluirInfo(pArvoreInt, alocaInt(1), comparaInt);
    incluirInfo(pArvoreInt, alocaInt(2), comparaInt);

    printf("Arvore 1\n");
    emOrdem(pArvoreInt->raiz, imprimeInt);
    printf("\n");

    pDArvore pArvoreInt2 = criarArvore(2);

    /* teste de inclusao 2 */
    incluirInfo(pArvoreInt2, alocaInt(5), comparaInt);
    incluirInfo(pArvoreInt2, alocaInt(3), comparaInt);
    incluirInfo(pArvoreInt2, alocaInt(9), comparaInt);
    incluirInfo(pArvoreInt2, alocaInt(1), comparaInt);
    incluirInfo(pArvoreInt2, alocaInt(2), comparaInt);

    printf("Arvore 2\n");
    emOrdem(pArvoreInt2->raiz, imprimeInt);
    printf("\n");

    printf("\nA Arvore 1 tem %d Nohs e %d de altura e %d de comprimento!\n", qtdeNohs(pArvoreInt), altura(pArvoreInt), comprimentoInterno(pArvoreInt));

    if(balanceada(pArvoreInt)==0){
        printf("\nA arvore 1 esta balanceada!\n");
    }else{
        printf("\nA arvore 1 nao esta balanceada!\n");
    }

    if(iguais(pArvoreInt, pArvoreInt2, comparaInt)==0){
        printf("\nAs arvores sao iguais!\n");
    }else{
        printf("\nAs arvores sao diferentes!\n");
    }

    if(estritamenteBinaria(pArvoreInt)==0){
        printf("\nA arvore eh estritamente binaria!\n");
    }else{
        printf("\nA arvore nao eh estritamente binaria!\n");
    }

    if(isBST(pArvoreInt, alocaInt(2), alocaInt(9), comparaInt)==0){
        printf("\nA arvore eh uma arvore binaria de busca!\n");
    }else{
        printf("\nA arvore nao eh uma arvore binaria de busca!\n");
    }
    /*pDArvore pArvoreIntEspelho;
    pArvoreIntEspelho = espelho(pArvoreInt); //! Por algum motivo nao compila no cmd externo entao apenas no terminal interno para ver

    printf("Arvore 2 - Espelho\n");
    emOrdem(pArvoreIntEspelho->raiz, imprimeInt);
    printf("\n");*/

    printf("\nArvore 1 - Amplitude\n");
    amplitude(pArvoreInt, imprimeInt);

    printf("\nArvore 2 - Amplitude\n");
    amplitude(pArvoreInt2, imprimeInt);


}
