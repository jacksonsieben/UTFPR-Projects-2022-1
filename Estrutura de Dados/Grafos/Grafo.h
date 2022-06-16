#ifndef GRAFO_IMPL_H
#define GRAFO_IMPL_H

#include <stddef.h>

/* observe que o grafo utiliza a biblioteca Lista.h */
#include "../FilaPilha/Pilha.h"
#include "../FilaPilha/Fila.h"
#include "../ListaLinear/Lista.h"

/* implementacao de grafo */
#include "TAD_Grafo.h"

#include "Operacoes/0_structs.h"

#include "Operacoes/1_criarGrafo.h"
#include "Operacoes/1_1_criarGrafoPlus.h"

#include "Operacoes/2_incluirVertice.h"

#include "Operacoes/3_incluirAresta.h"

#include "Operacoes/4_mostrarGrafo.h"

#include "Operacoes/5_excluirVertice.h" 
#include "Operacoes/6_excluirAresta.h"  

#include "Operacoes/7_buscaProfundidade.h"
#include "Operacoes/8_buscaAmplitude.h" //? tarefa posso usar uma fila na mesma ideia de profundidade (quase isso)

#include "Operacoes/9_existeCaminho.h"
#include "Operacoes/10_getCaminho.h"
#include "Operacoes/11_buscarVerticesIncidentes.h"

/**
#include "Operacoes/11_existeCaminhoHamiltoniano.h"
#include "Operacoes/12_existeCaminhoEuleriano.h"
#include "Operacoes/13_subGrafo.h"
*/

#include "Operacoes/14_buscarVertice.h"

#endif
