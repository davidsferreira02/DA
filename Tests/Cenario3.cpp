/*
Cenário 3: otimização das entregas expresso
Como descrito anteriormente, para as entregas expresso, a empresa utiliza uma única viatura,
com capacidade unitária, realizando entregas de um único pedido a cada viagem,
independentemente do seu volume ou peso. Os pedidos passam a indicar um tempo estimado de
entrega, correspondendo ao tempo total necessário para o veículo da empresa entregar o pedido
no destino final e regressar ao armazém. As entregas expresso só podem ser entregues durante o
horário comercial, das 9:00 às 17:00. Para o máximo número de pedidos de entregas expresso, a
empresa pretende minimizar o tempo médio dessas entregas num dia. Os pedidos que não
puderem ser transportados num dia, são descartados e retornam ao fornecedor.
Entre outros dados de entrada que se possam considerar, deve-se incluir:

O objetivo principal é minimizar o tempo médio previsto das entregas expresso a serem realizadas
num dia.
 */

#include "Cenarios.h"

using namespace std;

//order them in ascending order
bool compareEncomanedaByTime(Encomenda i, Encomenda j){
    if(i.getPrioridade() != j.getPrioridade()){
        return i.getPrioridade();
    }
    return (i.getDuracao() > j.getDuracao());
}

//Time complexity: O(n log n), where n is the number of encomendas

void Cenarios::cenario3(vector<Encomenda> &encomendas){

    cout << "Testing 3:" << endl;

    sort(encomendas.begin(), encomendas.end(), compareEncomanedaByTime);

    int TIME = (17 - 9) * 3600; //time in seconds from 9 to 17
    int numEncomendas = 0, used_time = 0, total_time_of_delivery = 0, TOTAL_ENCOMENDAS = encomendas.size();

    while( ((TIME - used_time) > 0) && (encomendas.size() > 0)){
        if( ( (TIME - used_time) - encomendas.rbegin()->getDuracao() ) > 0){
            numEncomendas++;
            used_time += encomendas.rbegin()->getDuracao();
            total_time_of_delivery += used_time;
            encomendas.pop_back();
        }
        else{
            break;
        }
    }

    cout << endl;
    cout << "Packages delivered: " << numEncomendas << endl;
    cout << "Average time of delivery: " << 9 + (total_time_of_delivery / numEncomendas) / 3600 << ":" << ((total_time_of_delivery / numEncomendas) % 3600) / 60 << ":" << ((total_time_of_delivery / numEncomendas) % 3600) % 60 << endl;
    cout << "Average time per package: " << used_time / (float) numEncomendas << " seconds" <<  endl;
    cout << "Percentage of packages delivered: " << ((float) numEncomendas / TOTAL_ENCOMENDAS) * 100 << "%" << endl << endl;
}
