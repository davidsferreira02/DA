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

double Carrinha::getScore() {
    return score;
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

void Carrinha::setScore(double mediaPeso, double mediaVol) {
    this->score = (((double) this->pesoMax)/mediaPeso)*(((double) this->volMax)/mediaVol);
}


