//
// Created by david on 08/04/22.
//

#include "vector"
#include "iostream"
#include "fstream"
#include "Ecomenda.hpp"
#include "Carrinha.hpp"


std::vector<Carrinha> C(std::vector<int> volumeMax,std::vector <int> pesoMax,std::vector <int> custo){
    std::vector<Carrinha>carrinha;
    for(int i=0;i<pesoMax.size();i++){
      carrinha[i]=Carrinha(volumeMax[i],pesoMax[i],custo[i]);
    }
    return carrinha;
}
std::vector<Ecomenda> E(std::vector<int> volume,std::vector <int> peso,std::vector <int> recompensa,std::vector<int>duracao){
    std::vector<Ecomenda>ecomenda;
    for(int i=0;i<peso.size();i++){
        ecomenda[i]=Ecomenda(volume[i],peso[i],recompensa[i],duracao[i]);
    }
    return ecomenda;
}
 bool funcaopreencher(Carrinha carrinhas,Ecomenda ecomendas) {
     if (carrinhas.getVolMax() < ecomendas.getVolume()) {
         return false;
     }
     if (carrinhas.getPesoMax() < ecomendas.getPeso()) {
         return false;
     }
     return true;
 }

void Cenario1(std::vector<Carrinha> carrinhas, std::vector <Ecomenda> ecomendas){
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

int main() {
  /*  std::vector<int> volume;
    std::vector <int> peso;
    std::vector <int> recompensa;
    std::string word;

    FILE * arquivo= fopen("estafeta.txt,"r);
    int caratere= fgetc(arquivo);
    while(caratere!=EOF){
        int i=0;
        while(caratere!='\n'){
            while(caratere!=' '){
                if(i==0) {
                    volume.push_back(caratere);
                }
                if(i==1){
                    peso.push_back(caratere);
                }
                if(i==2){
                    recompensa.push_back(caratere);
                }
            }
            i++;
        }
        */
      return 0;
    }










