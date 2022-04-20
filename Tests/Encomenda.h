#ifndef DA_ENCOMENDA_H
#define DA_ENCOMENDA_H

#include <iostream>

using namespace std;

class Encomenda{
private:
    int peso;
    int volume;
    int recompensa;
    int duracao;
    double score1;
    double score2;
    bool prioridade;
public:
    /*!
     * Construtor para uma Encomenda
     * @param peso peso do pacote a transportar
     * @param volume volume do pacote a transportar
     * @param recompensa valor que a empresa receberá como recompensa pela realização do serviço
     * @param duracao tempo estimado de entrega
     */
    Encomenda(int peso,int volume,int recompensa,int duracao);
    /*!
     *
     * @param peso peso a ser definido
     */
    void setPeso(int peso);
    /*!
     *
     * @param volume volume a ser definido
     */
    void setVolume(int volume);
    /*!
     *
     * @param recompensa recompensa a ser definida
     */
    void setRecompensa(int recompensa);
    /*!
     *
     * @param duracao tempo de entrega a ser definido
     */
    void setDuracao(int duracao);
    /*!
     * Calcula um determinado score para a encomenda que é tanto maior quanto mais acima da média for o seu peso e volume
     * @param mediaPeso média do peso de todas as encomendas
     * @param mediaVol média do volume de todas as encomendas
     */
    void setScore1(double mediaPeso, double mediaVol);
    /*!
     * Calcula um determinado score para a encomenda que é tanto maior quanto mais acima da média for a sua recompensa, e mais abaixo da média for o seu peso e volume
     * @param mediaRecomensa média da recompensa de todas as encomendas
     */
    void setScore2(double mediaRecomensa);
    /*!
     *
     * Coloca o valor de prioridade da encomenda a verdade
     */
    void setPrioritario();
    /*!
     *
     * @return Peso do pacote a transportar
     */
    int getPeso();
    /*!
     *
     * @return Volume do pacote a transportar
     */
    int getVolume();
    /*!
     *
     * @return Valor que a empresa receberá como recompensa pela realização do serviço
     */
    int getRecompensa();
    /*!
     *
     * @return Tempo estimado de entrega
     */
    int getDuracao();
    /*!
     *
     * @return Score da encomenda tendo em conta o seu peso e volume
     */
    double getScore1();
    /*!
     *
     * @return Score da encomenda tendo em conta o seu peso, volume, e recompensa
     */
    double getScore2();
    /*!
     *
     * @return Prioridade de uma encomenda (true se já for de uma dia anterior)
     */
    bool getPrioridade();
    /*!
     * Imprime uma encomenda
     */
    void printEncomenda();
};

#endif //DA_ENCOMENDA_H
