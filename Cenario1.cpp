//
// Created by david on 08/04/22.
//

#include "vector"
#include "iostream"
#include "fstream"
#include "Ecomenda.hpp"
#include "Carrinha.hpp"


void C(std::vector<int> volumeMax,std::vector <int> pesoMax,std::vector <int> custo){
    for(int i=0;i<pesoMax.size();i++){
      std::vector<Carrinha>carrinha;
      carrinha[i]=Carrinha(volumeMax[i],pesoMax[i],custo[i]);
    }
}
void E(std::vector<int> volume,std::vector <int> peso,std::vector <int> recompensa,std::vector<int>duracao){
    for(int i=0;i<peso.size();i++){
        std::vector<Ecomenda>ecomenda;
        ecomenda[i]=Ecomenda(volume[i],peso[i],recompensa[i],duracao[i]);
    }
}

void Cenario1(){

}


int main() {
    std::vector<int> volume;
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
      return 0;
    }










    */


}