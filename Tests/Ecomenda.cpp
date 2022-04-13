//
// Created by david on 06/04/22.
//
#include "Ecomenda.h"
Ecomenda::Ecomenda(const int peso, const int volume, const int recompensa,int duracao):
peso(peso),volume(volume),recompensa(recompensa),duracao(duracao){

}

int Ecomenda::getPeso() {
    return peso;
}

int Ecomenda::getRecompensa() {
    return recompensa;
}

int Ecomenda::getVolume() {
    return volume;
}
int Ecomenda::getDuracao() {
    return duracao;
}

void Ecomenda::setPeso(int peso) {
    this->peso=peso;
}
void Ecomenda::setRecompensa(int recompensa) {
    this->recompensa=recompensa;
}
void Ecomenda::setVolume(int volume) {
    this->volume=volume;
}
void Ecomenda::setDuracao(int duracao) {
    this->duracao=duracao;
}

void Ecomenda::printEncomenda() {
    cout << getPeso() << " " << getVolume() << " " << getRecompensa() << " " << getDuracao() << endl;
}
