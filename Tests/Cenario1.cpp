//
// Created by david on 08/04/22.
//

#include "vector"
#include "Ecomenda.h"
#include "Carrinha.h"

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

void Cenario1(vector<Carrinha> carrinhas, vector <Ecomenda> ecomendas){
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









