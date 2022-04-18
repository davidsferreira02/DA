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
    Carrinha(const int pesoMax, const int volMax, const int custo);
    void setPesoMax(int PesoMax);
    void setVolMax(int VolMax);
    void setCusto(int custo);
    void setScore1(double mediaPeso, double mediaVol);
    void setScore2(double mediaCusto);
    int getPesoMax();
    int getVolMax();
    int getCusto();
    double getScore1();
    double getScore2();
};


#endif //DA_CARRINHA_H
