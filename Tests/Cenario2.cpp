/*
Considere agora que os estafetas cobram uma determinada quantia pelo número total de pedidos
entregues num dia, constituindo um custo para a empresa. Pela entrega de cada pedido, a
empresa também recebe uma receita, que lhe é paga por quem solicitou o pedido. Pretende-se,
portanto, dentre os estafetas registados na plataforma, selecionar aqueles que, para os pedidos
de um determinado dia, irão maximizar o lucro da empresa naquele dia, que será a diferença entre
a receita total dos pedidos entregues e a despesa correspondente ao custo total a ser pago pelas
entregas aos estafetas. Novamente, no caso de não haver capacidade total de transporte
suficiente ou das despesas serem superiores às receitas, os pedidos que não puderem ser
transportados num dia são descartados e retornam ao fornecedor.

O objetivo principal é maximizar o lucro da empresa (diferença entre a receita total e o custo total)
para a entrega de todos os pedidos ou do maior número de pedidos, num dia, pelos estafetas
selecionados.
*/

#include "Cenarios.h"

using namespace std;

bool podePreencher2(Carrinha carrinhas, Encomenda encomendas) {
    if (carrinhas.getVolMax() < encomendas.getVolume()) {
        return false;
    }
    if (carrinhas.getPesoMax() < encomendas.getPeso()) {
        return false;
    }
    return true;
}

bool compareCarrinha2(Carrinha c1, Carrinha c2) {
    return (c1.getScore2() > c2.getScore2());
}

bool compareEncomenda2(Encomenda e1, Encomenda e2) {
    return (e1.getScore2() > e2.getScore2());
}

void mediaCarrinhas(vector<Carrinha> carrinhas, double &medPesoCar, double &medVolCar, double &medCusto){
    double pesoTotal, volTotal, custoTotal;

    for(int i = 0; i < carrinhas.size(); i++){
        pesoTotal += carrinhas[i].getPesoMax();
        volTotal += carrinhas[i].getVolMax();
        custoTotal += carrinhas[i].getCusto();
    }

    medPesoCar = pesoTotal / carrinhas.size();
    medVolCar = volTotal / carrinhas.size();
    medCusto = custoTotal / carrinhas.size();
}

void mediaEncomendas(vector<Encomenda> encomendas, double &medPesoEnc, double &medVolEnc, double &medRecompensa){
    double pesoTotal, volTotal,recompensaTotal;

    for(int i = 0; i < encomendas.size(); i++){
        pesoTotal += encomendas[i].getPeso();
        volTotal += encomendas[i].getVolume();
        recompensaTotal += encomendas[i].getRecompensa();
    }

    medPesoEnc = pesoTotal / encomendas.size();
    medVolEnc = volTotal / encomendas.size();
    medRecompensa = recompensaTotal / encomendas.size();
}

void setScores2(vector<Carrinha> &carrinhas, vector<Encomenda> &encomendas) {
    double medPesoEnc, medVolEnc, medPesoCar, medVolCar, medCusto, medRecompensa;
    mediaEncomendas(encomendas,medPesoEnc,medVolEnc, medRecompensa);
    mediaCarrinhas(carrinhas,medPesoCar, medVolCar, medCusto);

    for (auto &carrinha : carrinhas) {
        carrinha.setScore1(medPesoCar, medVolCar);
        carrinha.setScore2(medCusto);
    }
    for (auto &encomenda : encomendas) {
        encomenda.setScore1(medPesoEnc,medVolEnc);
        encomenda.setScore2(medRecompensa);
    }
}

void Cenarios::cenario2(vector<Carrinha> carrinhas, vector<Encomenda> encomendas) {

    setScores2(carrinhas,encomendas);
    sort(encomendas.begin(),encomendas.end(), compareEncomenda2);
    sort(carrinhas.begin(),carrinhas.end(), compareCarrinha2);

    int numEncomendas = 0, TOTAL_ENCOMENDAS = encomendas.size();
    int recompensasTotal = 0, recompensaCarrinha = 0, custoTotal = 0;
    int estafetas = 0;
    for (auto carrinha: carrinhas) {
        bool flag = 0;
        int idx = 0;
        vector<int> encomendasEntregues;
        recompensaCarrinha = 0;
        for (auto encomenda: encomendas) {
            bool preencher = podePreencher2(carrinha, encomenda);
            if (preencher == true) {
                carrinha.setVolMax(carrinha.getVolMax() - encomenda.getVolume());
                carrinha.setPesoMax(carrinha.getPesoMax() - encomenda.getPeso());
                flag = 1;
                recompensaCarrinha += encomenda.getRecompensa();
                encomendasEntregues.push_back(idx);
            }
            idx++;
        }
        if (flag == 1) {
            if(recompensaCarrinha > carrinha.getCusto()) {
                estafetas++;
                for(int j : encomendasEntregues) {
                    encomendas.erase(encomendas.begin() + j);
                }
                numEncomendas += encomendasEntregues.size();
                //cout << "Added car num" << estafetas << endl;
                custoTotal += carrinha.getCusto();
                recompensasTotal += recompensaCarrinha;
            }
            else{
                //cout << "The car did not have profit" << endl;
            }
        }
    }

    cout << endl;
    cout << "Number of cars used: "<< estafetas << endl;
    cout << "Number of packages delivered: " << numEncomendas << endl;
    cout << "Average of packages per car: " << (float) numEncomendas / estafetas << endl;
    cout << "Percentage of packages delivered: " << ((float) numEncomendas / TOTAL_ENCOMENDAS) * 100 << "%" << endl;
    cout << "Money spent on cars: " << custoTotal << " euros" << endl;
    cout << "Money made on rewards: " << recompensasTotal << " euros" << endl;
    cout << "Profit: " << recompensasTotal - custoTotal << " euros"<< endl;
}



