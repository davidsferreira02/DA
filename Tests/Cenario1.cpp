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

bool podePreencher1(Carrinha carrinhas, Encomenda encomendas) {
    if (carrinhas.getVolMax() < encomendas.getVolume()) {
        return false;
    }
    if (carrinhas.getPesoMax() < encomendas.getPeso()) {
        return false;
    }
    return true;
}

void mediaCarrinhas(vector<Carrinha> carrinhas, double &medPesoCar, double &medVolCar){
    double pesoTotal, volTotal;

    for(int i = 0; i < carrinhas.size(); i++){
        pesoTotal += carrinhas[i].getPesoMax();
        volTotal += carrinhas[i].getVolMax();
    }

    medPesoCar = pesoTotal / carrinhas.size();
    medVolCar = volTotal / carrinhas.size();
}

void mediaEncomendas(vector<Encomenda> encomendas, double &medPesoEnc, double &medVolEnc){
    double pesoTotal, volTotal;

    for(int i = 0; i < encomendas.size(); i++){
        pesoTotal += encomendas[i].getPeso();
        volTotal += encomendas[i].getVolume();
    }

    medPesoEnc = pesoTotal / encomendas.size();
    medVolEnc = volTotal / encomendas.size();
}

bool compareCarrinha1(Carrinha c1, Carrinha c2) {
    return (c1.getScore1() > c2.getScore1());
}

bool compareEncomenda1(Encomenda e1, Encomenda e2) {
    return (e1.getScore1() > e2.getScore1());
}

void setScores1(vector<Carrinha> &carrinhas, vector<Encomenda> &encomendas) {
    double medPesoEnc, medVolEnc, medPesoCar, medVolCar;
    mediaEncomendas(encomendas,medPesoEnc,medVolEnc);
    mediaCarrinhas(carrinhas,medPesoCar, medVolCar);

    for (auto &carrinha : carrinhas) carrinha.setScore1(medPesoCar, medVolCar);
    for (auto &encomenda : encomendas) encomenda.setScore1(medPesoEnc,medVolEnc);
}



void Cenarios::cenario1(vector<Carrinha> carrinhas, vector<Encomenda> encomendas) {

    cout << "Testing 1:" << endl;

    setScores1(carrinhas,encomendas);
    std::sort(carrinhas.begin(), carrinhas.end(), compareCarrinha1);
    std::sort(encomendas.begin(), encomendas.end(), compareEncomenda1);

    int numEncomendas = 0, TOTAL_ENCOMENDAS = encomendas.size();

    int estafetas = 0;
    for (auto carrinha: carrinhas) {
        int i = 0;
        int j = 0;
        for (auto encomenda: encomendas) {
            bool preencher = podePreencher1(carrinha, encomenda);
            if (preencher == true) {
                carrinha.setVolMax(carrinha.getVolMax() - encomenda.getVolume());
                carrinha.setPesoMax(carrinha.getPesoMax() - encomenda.getPeso());
                encomendas.erase(encomendas.begin() + j);
                i = 1;
                numEncomendas++;
            }
            j++;
        }
        if (i == 1) {
            estafetas++;
        }

    }

    cout << endl;
    cout << "Number of cars used: "<< estafetas << endl;
    cout << "Number of packages delivered: " << numEncomendas << endl;
    cout << "Average of packages per car: " << (float) numEncomendas / estafetas << endl;
    cout << "Percentage of packages delivered: " << ((float) numEncomendas / TOTAL_ENCOMENDAS) * 100 << "%" << endl << endl;
}









