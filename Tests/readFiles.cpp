//
// Created by User on 13/04/2022.
//

#include "readFiles.h"

using namespace std;

vector<Encomenda> ReadFiles::readEncomendas(int filenum){
    vector<Encomenda> encomendas;
    ifstream in;

    string filename = "../Tests/Data/Encomendas";
    filename.append(to_string(filenum));
    filename.append(".txt");

    in.open(filename);

    if(!in.is_open()){
        cerr << "Unable to open file" << endl;
    }

    string s, peso, volume, recompensa, duracao;

    getline(in, s); //remove the txt header

    while(getline(in, s)){
        stringstream ss(s);
        getline(ss, peso, ' ');
        getline(ss, volume, ' ');
        getline(ss, recompensa, ' ');
        getline(ss, duracao);

        Encomenda encomenda(stoi(peso), stoi(volume), stoi(recompensa), stoi(duracao));

        encomendas.push_back(encomenda);
    }
    return encomendas;
}

vector<Carrinha> ReadFiles::readCarrinhas(int filenum) {
    vector<Carrinha> carrinhas;
    ifstream in;

    string filename = "../Tests/Data/Carrinhas";
    filename.append(to_string(filenum));
    filename.append(".txt");

    in.open(filename);

    if(!in.is_open()){
        cerr << "Unable to open file" << endl;
    }

    string s, pesoMax, volumeMax, custo;

    getline(in, s); //remove the txt header

    while(getline(in, s)){
        stringstream ss(s);
        getline(ss, pesoMax, ' ');
        getline(ss, volumeMax, ' ');
        getline(ss, custo);

        Carrinha carrinha(stoi(pesoMax), stoi(volumeMax), stoi(custo));

        carrinhas.push_back(carrinha);
    }
    return carrinhas;
}
