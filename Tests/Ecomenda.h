class Ecomenda{
private:
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