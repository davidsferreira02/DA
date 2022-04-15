/*
Cenário 1: otimização do número de estafetas
Considerando que os estafetas registados na plataforma estão sempre disponíveis para a
realização de entregas normais, a empresa necessita distribuir os pedidos de entregas normais
acumulados para um determinado dia entre os estafetas. A distribuição dos pedidos deve ser
otimizada de forma a minimizar o número de estafetas a utilizar. Considera-se também que os
estafetas só realizam uma viagem por dia, deve-se portanto maximizar o número de pedidos a
transportar por um estafeta numa jornada. Os pedidos que não puderem ser transportados num
dia, são descartados e retornam ao fornecedor.

O objetivo principal é minimizar o número de estafetas para a entrega de todos os pedidos ou do
maior número de pedidos, num dia.
 */

#include "Cenarios.h"

using namespace std;

 bool funcaopreencher(Carrinha carrinhas,Ecomenda ecomendas) {
     if (carrinhas.getVolMax() < ecomendas.getVolume()) {
         return false;
     }
     if (carrinhas.getPesoMax() < ecomendas.getPeso()) {
         return false;
     }
     return true;
 }

void Cenarios::cenario1(vector<Carrinha> carrinhas, vector <Ecomenda> ecomendas){
    for(auto carrinha : carrinhas){
        for(auto  ecomenda : ecomendas){
           bool preencher=funcaopreencher(carrinha,ecomenda);
            if(preencher==true){
                carrinha.setVolMax(carrinha.getVolMax()-ecomenda.getVolume());
                carrinha.setPesoMax(carrinha.getPesoMax()-ecomenda.getPeso());
            }
        }
    }
}









