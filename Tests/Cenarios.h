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
    static void cenario3(vector<Encomenda> encomendas);
    static void cenario1(vector<Carrinha> carrinhas, vector<Encomenda> ecomendas);
    static void cenario2(vector<Carrinha> carrinhas, vector<Encomenda> ecomendas);
};

#endif //DA_CENARIOS_H
