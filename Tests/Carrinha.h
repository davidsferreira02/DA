#ifndef DA_CARRINHA_H
#define DA_CARRINHA_H

class Carrinha{
private:
    int pesoMax;
    int volMax;
    int custo;
    double score;
public:
    Carrinha(const int pesoMax, const int volMax, const int custo);
    void setPesoMax(int PesoMax);
    void setVolMax(int VolMax);
    void setCusto(int custo);
    void setScore(double mediaPeso, double mediaVol);
    int getPesoMax();
    int getVolMax();
    int getCusto();
    double getScore();
};


#endif //DA_CARRINHA_H
