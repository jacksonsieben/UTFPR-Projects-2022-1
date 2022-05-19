

void limpaPilha (pDPilha pd, FuncaoLiberacao pfl){
    if(pilhaVazia(pd)==1){
        return;
    }
    pfl(desempilharInfo(pd));
    limpaPilha(pd, pfl);
}