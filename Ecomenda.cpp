//
// Created by david on 06/04/22.
//
#include "Ecomenda.hpp"
Ecomenda::Ecomenda(const int peso, const int volume, const int recompensa):
peso(peso),volume(volume),recompensa(recompensa){

}
Expresso::Expresso(const int peso, const int volume, const int recompensa, const int dataEntrega):
    Encomenda(peso,volume,recompensa),dataEntrega(dataEntrega){
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
int Expresso::getDataEntrega() {
    return dataEntrega;
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
void Expresso::setDataEntrega(int dataEntrega) {
    this->dataEntrega=dataEntrega;
}
