//
// Created by User on 13/04/2022.
//

#include "readFiles.h"
#include "Cenarios.h"

int main(){
    vector<Encomenda> encomendas = ReadFiles::readEncomendas();
    vector<Carrinha> carrinhas = ReadFiles::readCarrinhas();

    //Cenarios::cenario1(carrinhas, encomendas);
    Cenarios::cenario2(carrinhas, encomendas);
    //Cenarios::cenario3(encomendas);

}