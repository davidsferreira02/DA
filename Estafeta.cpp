#include "Estafeta.hpp"

Estafeta::Estafeta(const int pesoMax, const int volMax, const int matricula):
pesoMax(pesoMax),volMax(volMax),matricula(matricula){

}


int Estafeta::getPesoMax() {
    return pesoMax;
}

int Estafeta::getVolMax() {
    return volMax;
}

int Estafeta::getMatricula() {
    return matricula;
}

void Estafeta::setPesoMax(int pesoMax) {
    this->pesoMax=pesoMax;
}
void Estafeta::setVolMax(int volMax) {
    return this->volMax=volMax;
}
void Estafeta::setMatricula(int matricula) {
    this->matricula=matricula;
}



