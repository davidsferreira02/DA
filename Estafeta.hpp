class Estafeta{
private:
    int pesoMax;
    int volMax;
    int matricula;
public:
    Estafeta(const int pesoMax, const int volMax, const int matricula);
    void setPesoMax(int PesoMax);
    void setVolMax(int VolMax);
    void setMatricula(int matricula);
    int getPesoMax();
    int getVolMax();
    int getMatricula();
};

