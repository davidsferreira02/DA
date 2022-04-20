#ifndef DA_CARRINHA_H
#define DA_CARRINHA_H

class Carrinha{
private:
    int pesoMax;
    int volMax;
    int custo;
    double score1;
    double score2;

public:
    /*!
     * Construtor para uma Carinha
     * @param pesoMax peso máximo que pode transportar
     * @param volMax volume máximo que pode transportar
     * @param custo custo de transporte que será pago pela empresa
     */
    Carrinha(const int pesoMax, const int volMax, const int custo);
    /*!
     *
     * @param PesoMax peso máximo da carrinha a ser definido
     */
    void setPesoMax(int PesoMax);
    /*!
     *
     * @param VolMax volume máximo da carrinha a ser definido
     */
    void setVolMax(int VolMax);
    /*!
     *
     * @param custo custo da carrinha a ser definido
     */
    void setCusto(int custo);
    /*!
     * Calcula um determinado score para a carrinha que é tanto maior quanto mais acima da média for o seu peso e volume máximos
     * @param mediaPeso média do peso máximo de todas as carrinhas
     * @param mediaVol média do volume máximo de todas as carrinhas
     */
    void setScore1(double mediaPeso, double mediaVol);
    /*!
     * Calcula um determinado score para a carrinha que é tanto maior quanto mais acima da média for o seu peso e volume máximos, e mais abaixo da média for o seu custo
     * @param mediaCusto média do custo de todas as carrinhas
     */
    void setScore2(double mediaCusto);
    /*!
     *
     * @return Peso máximo que a carrinha pode transportar
     */
    int getPesoMax();
    /*!
     *
     * @return Volume máximo que a carrinha pode transportar
     */
    int getVolMax();
    /*!
     *
     * @return Custo de transporte que será pago pela empresa
     */
    int getCusto();
    /*!
     *
     * @return Score da carrinha tendo em conta o seu peso e volume máximos
     */
    double getScore1();
    /*!
     *
     * @return Score da carrinha tendo em conta o seu peso e volume máximos, e o seu custo
     */
    double getScore2();
};


#endif //DA_CARRINHA_H
