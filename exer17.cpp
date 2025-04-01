#include<iostream>
using namespace std;

//Funcao para receber os dados da viagem
void receberDados(double tempo, double velMedia){
    cout << "Digite o tempo de percurso(em horas)";
    cin >> tempo;
    cout << "Digite a velocidade media do veiculo(em km/h):";
    cin >> velMedia;
}

//Funcao para calcular a distancia percorrida
double calcDistancia(double tempo, double velMedia){
    return tempo * velMedia;
}

//Funcao para calcular a quantidade em litros 
double calcLitrosGastos(double distancia){
    const double kmLitro = 12.0;
    return distancia/ kmLitro;
}

//Funcao para exibir o resultado
void exibicao(double litrosGastos){
    cout << " A quantidade de litros gastos na viagem foi de: "<< litrosGastos << " litros "<<endl ;

}

int main(){
    double tempo, velMedia, distancia, litrosGastos;

    //Chama dados da viagem
    receberDados(tempo, velMedia);

    // Chama calculo da distancia percorrida
    distancia = calcDistancia(tempo, velMedia);

    //Chama calculo de quantidade de litros gastos
    calcLitrosGastos = calcDistancia(tempo, velocidade);    

    //Exibe os resultados
    exibicao(litrosGastos);


}

