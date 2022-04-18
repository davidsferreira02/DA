//
// Created by User on 13/04/2022.
//

#include "readFiles.h"
#include "Cenarios.h"

int main(){
    vector<Encomenda> encomendas = readFiles::readEncomendas();
    vector<Carrinha> carrinhas = readFiles::readCarrinhas();

    Cenarios::cenario3(encomendas);
}