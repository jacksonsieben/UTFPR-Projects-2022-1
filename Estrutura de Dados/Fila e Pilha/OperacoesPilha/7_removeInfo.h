int removeInfo (pDPilha pd, void *info, FuncaoComparacao pfc){
    pDPilha pDAux = criarPilha();

    void *aux;
    int flag = 0;

    while(pilhaVazia(pd) == 0){
        //info = desempilharInfo(pd);
        aux = desempilharInfo(pd);
        if(pfc(info,aux)==0){
            flag = 1;
        }else{
            empilharInfo(pDAux, aux);
        }
    }
 
    while(pilhaVazia(pDAux) == 0){
        empilharInfo(pd, desempilharInfo(pDAux));
    }
    return flag;
    //return excluirInfo(pd->pdLista, info, pfc);
}