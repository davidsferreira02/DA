//
// Created by User on 13/04/2022.
//

#ifndef DA_CENARIOS_H
#define DA_CENARIOS_H

#include <iostream>
#include <vector>
#include <algorithm>
#include "Encomenda.h"
#include "Carrinha.h"

using namespace std;

class Cenarios{
public:
    /*!
     * Função que executa o cenário 1 do enunciado
     * @param carrinhas vetor com todas as carrinhas do sistema
     * @param encomendas vetor com todas as encomendas do sistema
     */
    static void cenario1(vector<Carrinha> carrinhas, vector<Encomenda> &encomendas);
    /*!
     * Função que executa o cenário 2 do enunciado
     * @param carrinhas vetor com todas as carrinhas do sistema
     * @param encomendas vetor com todas as encomendas do sistema
     */
    static void cenario2(vector<Carrinha> carrinhas, vector<Encomenda> &encomendas);
    /*!
     * Função que executa o cenário 3 do enunciado
     * @param encomendas vetor com todas as encomendas do sistema
     */
    static void cenario3(vector<Encomenda> &encomendas);
};

#endif //DA_CENARIOS_H
