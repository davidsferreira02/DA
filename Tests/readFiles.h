//
// Created by User on 13/04/2022.
//

#ifndef PROJETO_READFILES_H
#define PROJETO_READFILES_H

#include "Carrinha.h"
#include "Encomenda.h"
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

class ReadFiles{
public:
    /*!
     * Lê todas as encomendas dos ficheiros, para que estas possam ser usadas nos cenários
     * @param filenum número do ficheiro de teste a ler
     * @return vetor com todas as encomendas lidas
     */
    static vector<Encomenda> readEncomendas(int filenum);
    /*!
     * Lê todas as carrinhas dos ficheiros, para que estas possam ser usadas nos cenários
     * @param filenum número do ficheiro de teste a ler
     * @return vetor com todas as carrinhas lidas
     */
    static vector<Carrinha> readCarrinhas(int filenum);
};

#endif //PROJETO_READFILES_H
