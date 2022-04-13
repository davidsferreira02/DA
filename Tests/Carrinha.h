#ifndef DA_CARRINHA_H
#define DA_CARRINHA_H

class Carrinha{
private:
    int pesoMax;
    int volMax;
    int custo;
public:
    Carrinha(const int pesoMax, const int volMax, const int custo);
    void setPesoMax(int PesoMax);
    void setVolMax(int VolMax);
    void setCusto(int custo);
    int getPesoMax();
    int getVolMax();
    int getCusto();
};


#endif //DA_CARRINHA_H
