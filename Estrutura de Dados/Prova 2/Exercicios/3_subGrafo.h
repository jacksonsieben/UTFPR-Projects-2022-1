int subGrafo (pDGrafo grafoG, pDGrafo grafoH, FuncaoComparacao pfc){
    if(pfc == NULL){
        pfc = grafoG->fc;
    }

    pNoh vAtualG = grafoG->listaVertices->primeiro;
    pNoh vAtualH = grafoH->listaVertices->primeiro;

    int cont = 0;

    if(contidaNaLista(grafoG->listaVertices, grafoH->listaVertices, pfc) == 1){
        while(vAtualG != NULL){
            pVertice verticeG = (pVertice) vAtualG;
            while(vAtualH != NULL){
                pVertice verticeH = (pVertice) vAtualH;
                if(contidaNaLista(verticeG->listaAdjacencias, verticeH->listaAdjacencias, pfc) == 1){
                    cont++;
                    vAtualH = vAtualH->prox;
                }
            }
            vAtualG = vAtualG->prox;
        }
    }

    if(cont == grafoH->listaVertices->quantidade){
        return 1; // sim eh subgrafo
    }else{
        return 0; // nao eh subgrafo
    }
}