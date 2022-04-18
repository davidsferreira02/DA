#ifndef DA_ENCOMENDA_H
#define DA_ENCOMENDA_H

#include <iostream>

using namespace std;

class Encomenda{
private:
    int peso;
    int volume;
    int recompensa;
    int duracao;
public:
    Encomenda(int peso,int volume,int recompensa,int duracao);
    void setPeso(int peso);
    void setVolume(int volume);
    void setRecompensa(int recompensa);
    void setDuracao(int duracao);
    int getPeso();
    int getVolume();
    int getRecompensa();
    int getDuracao();
    void printEncomenda();
};

#endif //DA_ENCOMENDA_H
