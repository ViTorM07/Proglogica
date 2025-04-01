#include <iostream>

using namespace std;

//Receba o número de voltas, a extensão do circuito (em metros) e o tempo de
//duração (minutos). Calcule e mostre a velocidade média em km/h.

int main(){
    int voltas;
    double extensao;   //metros
    double tempo; //duracao em minutos
    double velMedia;
    //


    cout << "Media de velocidade em km/h" << endl;
    cout << "Digite o numero de voltas: ";
    cin>> voltas;
    cout << "Digite a extensão do circuito em metros ";
    cin >> extensao;
    cout << "Digite o tempo de duração em minutos: ";
    cin >> tempo;

    //Calcula a distancia total percorrida em metros: ;
    double distanciaCorrida = extensao*voltas;
    //Converte a distancia total de metros para km
    extensao = extensao/1000;  
    //Converte o tempo de minutos para horas 
    tempo = tempo/60;
    //Calcula a velocidade media em km/h

    velMedia = distanciaCorrida/tempo;
    cout << " DISTÂNCIA PERCORRIDA: " << distanciaCorrida <<endl;
    cout << " TEMPO DE CORRIDA "<< tempo <<endl;
    cout << " VELOCIDADE MEDIA: "<< velMedia<<endl;



}