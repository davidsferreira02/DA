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
    double score1;
    double score2;
public:
    Encomenda(int peso,int volume,int recompensa,int duracao);
    void setPeso(int peso);
    void setVolume(int volume);
    void setRecompensa(int recompensa);
    void setDuracao(int duracao);
    void setScore1(double mediaPeso, double mediaVol);
    void setScore2(double mediaRecomensa);
    int getPeso();
    int getVolume();
    int getRecompensa();
    int getDuracao();
    double getScore1();
    double getScore2();
    void printEncomenda();
};

#endif //DA_ENCOMENDA_H
