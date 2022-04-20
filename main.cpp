//
// Created by User on 13/04/2022.
//

#include "readFiles.h"
#include "Cenarios.h"

int main(){
    string encomendasFile, carrinhasFile;
    vector<Encomenda> encomendas = {};
    vector<Carrinha> carrinhas = {};
    while(true) {
        cout << "Enter the name of the file for the deliveries (0 for default)" << endl;
        cin >> encomendasFile;
        if(encomendasFile == "0"){
            vector<Encomenda> newEncomendas = ReadFiles::readEncomendas();
            encomendas.insert(encomendas.end(), newEncomendas.begin(), newEncomendas.end());
        }
        else{
            vector<Encomenda> newEncomendas = ReadFiles::readEncomendas(encomendasFile);
            encomendas.insert(encomendas.end(), newEncomendas.begin(), newEncomendas.end());
        }

        cout << "Enter the name of the file for the cars (0 for default)" << endl;
        cin >> carrinhasFile;
        if(encomendasFile == "0"){
            vector<Carrinha> newCarrinhas = ReadFiles::readCarrinhas();
            carrinhas.insert(carrinhas.end(), newCarrinhas.begin(), newCarrinhas.end());
        }
        else{
            vector<Carrinha> newCarrinhas = ReadFiles::readCarrinhas(carrinhasFile);
            carrinhas.insert(carrinhas.end(), newCarrinhas.begin(), newCarrinhas.end());
        }

        int option;
        bool invalid = true;
        while(invalid) {

            cout << "Choose one one scenario (1, 2 or 3)" << endl;
            cin >> option;
            switch (option) {
                case 1:
                    Cenarios::cenario1(carrinhas, encomendas);
                    invalid = false;
                    break;
                case 2:
                    Cenarios::cenario2(carrinhas, encomendas);
                    invalid = false;
                    break;
                case 3:
                    Cenarios::cenario3(encomendas);
                    invalid = false;
                    break;
                default:
                    cout << "Invalid scenario" << endl;
                    cin.clear();
                    cin.ignore(1000, '\n');
                    break;
            }
        }

        for(auto &encomenda : encomendas){
            encomenda.setPrioritario();
        }

        char nextDay;
        cout << "Want to continue to the next day? (y/n)" << endl;
        cin >> nextDay;

        if(tolower(nextDay) != 'y'){
            break;
        }
    }
}