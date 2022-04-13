//
// Created by User on 13/04/2022.
//

#ifndef PROJETO_READFILES_H
#define PROJETO_READFILES_H

#include "Carrinha.h"
#include "Ecomenda.h"
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

class readFiles{
public:
    static vector<Ecomenda> readEncomendas();
    static vector<Carrinha> readCarrinhas();
};

#endif //PROJETO_READFILES_H
