class Ecomenda{
protected:
    int peso;
    int volume;
    int recompensa;
    int duracao;
public:
    Ecomenda(int peso,int volume,int recompensa,int duracao);
    void setPeso(int peso);
    void setVolume(int volume);
    void setRecompensa(int recompensa);
    void setDuracao(int duracao);
    int getPeso();
    int getVolume();
    int getRecompensa();
    int getDuracao();

};

/*class Expresso:public Ecomenda{
private:
    int dataEntrega;

public:
    Expresso(const int peso,const int volume,const int recompensa,const int dataEntrega);
    int getDataEntrega();
    void  setDataEntrega(int dataEntrega);

};
*/