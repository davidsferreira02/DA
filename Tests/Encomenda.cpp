//
// Created by david on 06/04/22.
//
#include "Encomenda.h"
Encomenda::Encomenda(const int peso, const int volume, const int recompensa,int duracao):
peso(peso),volume(volume),recompensa(recompensa),duracao(duracao){
    prioridade = false;
}

int Encomenda::getPeso() {
    return peso;
}

int Encomenda::getRecompensa() {
    return recompensa;
}

int Encomenda::getVolume() {
    return volume;
}
int Encomenda::getDuracao() {
    return duracao;
}

double Encomenda::getScore1() {
    return score1;
}

double Encomenda::getScore2() {
    return score2;
}

bool Encomenda::getPrioridade() {
    return prioridade;
}

void Encomenda::setPeso(int peso) {
    this->peso=peso;
}
void Encomenda::setRecompensa(int recompensa) {
    this->recompensa=recompensa;
}
void Encomenda::setVolume(int volume) {
    this->volume=volume;
}
void Encomenda::setDuracao(int duracao) {
    this->duracao=duracao;
}

void Encomenda::setPrioritario() {
    this->prioridade=true;
}

void Encomenda::setScore1(double mediaPeso, double mediaVol) {
    this->score1 = (((this->peso - mediaPeso) / mediaPeso)) + (((this->volume - mediaVol)/mediaVol));
}

void Encomenda::setScore2(double mediaRecompensa) {
    this->score2 = (((this->recompensa - mediaRecompensa)/mediaRecompensa) * 2) - score1;
}
