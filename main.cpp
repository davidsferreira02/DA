//
// Created by User on 13/04/2022.
//

#include "readFiles.h"
#include "Cenarios.h"
#include <time.h>

int main(){
    string encomendasFile, carrinhasFile;
    vector<Encomenda> encomendas = {};
    vector<Carrinha> carrinhas = {};

    clock_t t;

    vector<int> sizes = {10,100,1000,10000};

    cout << "CENARIO 1" << endl;

    for (int i = 1;i <= sizes.size();i++) {
        encomendas = ReadFiles::readEncomendas(to_string(i));
        carrinhas = ReadFiles::readCarrinhas(to_string(i));
        t = clock();
        Cenarios::cenario1(carrinhas,encomendas);
        t = clock() - t;
        cout << "For size " << sizes[i-1] << " : ";
        cout << ((float) t)/CLOCKS_PER_SEC << " sec \n";
    }

    cout << "CENARIO 2" << endl;

    for (int i = 1;i <= sizes.size();i++) {
        encomendas = ReadFiles::readEncomendas(to_string(i));
        carrinhas = ReadFiles::readCarrinhas(to_string(i));
        t = clock();
        Cenarios::cenario2(carrinhas,encomendas);
        t = clock() - t;
        cout << "For size " << sizes[i-1] << " : ";
        cout << ((float) t)/CLOCKS_PER_SEC << " sec \n";
    }

    cout << "CENARIO 3" << endl;

    for (int i = 1;i <= sizes.size();i++) {
        encomendas = ReadFiles::readEncomendas(to_string(i));
        t = clock();
        Cenarios::cenario3(encomendas);
        t = clock() - t;
        cout << "For size " << sizes[i-1] << " : ";
        cout << ((float) t)/CLOCKS_PER_SEC << " sec \n";
    }

}