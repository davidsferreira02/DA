//
// Created by User on 13/04/2022.
//

#include "readFiles.h"
#include "Cenarios.h"

int main(){
    int fileNumber = 3;
    vector<Encomenda> encomendas;
    vector<Carrinha> carrinhas;

    for (int i = 1; i <= fileNumber; i++) {
        encomendas = ReadFiles::readEncomendas(1);
        carrinhas = ReadFiles::readCarrinhas(i);

        cout << "TEST NUMBER " << i << ":\n";
        Cenarios::cenario1(carrinhas, encomendas);
        Cenarios::cenario2(carrinhas, encomendas);
        Cenarios::cenario3(encomendas);
    }

    return 0;
}