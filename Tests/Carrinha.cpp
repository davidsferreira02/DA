#include "Carrinha.h"

Carrinha::Carrinha(const int pesoMax, const int volMax, const int custo) :
pesoMax(pesoMax),volMax(volMax),custo(custo){
}

int Carrinha::getPesoMax() {
    return pesoMax;
}

int Carrinha::getVolMax() {
    return volMax;
}

int Carrinha::getCusto() {
    return custo;
}

double Carrinha::getScore1() {
    return score1;
}

double Carrinha::getScore2() {
    return score2;
}

void Carrinha::setPesoMax(int pesoMax) {
    this->pesoMax=pesoMax;
}
void Carrinha::setVolMax(int volMax) {
     this->volMax=volMax;
}
void Carrinha::setCusto(int custo) {
    this->custo=custo;
}

void Carrinha::setScore1(double mediaPeso, double mediaVol) {
    this->score1 = (((double) this->pesoMax)/mediaPeso)*(((double) this->volMax)/mediaVol);
}

void Carrinha::setScore2(double mediaCusto) {
    this->score2 = score1/(((double) this->custo)/mediaCusto);
}


