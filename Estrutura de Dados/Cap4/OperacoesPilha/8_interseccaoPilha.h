pDPilha interseccao (pDPilha pd1, pDPilha pd2, FuncaoComparacao pfc){
    pDPilha pdCopia = criarPilha();

    pdCopia->pdLista = intersecaoLista(pd1->pdLista, pd2->pdLista, pfc);
    
    return pdCopia;
}