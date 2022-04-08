class Ecomenda{
protected:
    int peso;
    int volume;
    int recompensa;
public:
    Ecomenda(int peso,int volume,int recompensa);
    void setPeso(int peso);
    void setVolume(int volume);
    void setRecompensa(int recompensa);
    int getPeso();
    int getVolume();
    int getRecompensa();

};

class Expresso:public Ecomenda{
private:
    int dataEntrega;

public:
    Expresso(const int peso,const int volume,const int recompensa,const int dataEntrega);
    int getDataEntrega();
    int setDataEntrega(int dataEntrega);

};
