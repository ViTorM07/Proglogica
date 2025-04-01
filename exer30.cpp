#include <iostream>
using namespace std;

//Calcular valor investido do investimento
double calcValCorrigido(int tipoInvestimento, double valorInvestido){
    double valorCorrigido;

    if(tipoInvestimento ==1){
        valorCorrigido = valorInvestido * 1.03;
    }else if(tipoInvestimento == 2){
        //Renda fixa: 5% em 30 dias
        valorCorrigido = valorInvestido * 1.05;
    }else{
        cout <<"Tipo de investimento inválido" <<endl;
        return 0;
    }
    return valorCorrigido;
}



int main(){
    int tipoInvestimento;
    double valorInvestimento, valorCorrigido;

    //Receber o tipo de investimento e e o valor investido
    cout << "Digite o tipo de investimento ()";
    cin >> tipoInvestimento;

    cout << "Digite o valor investido: ";
    cin >> valorInvestimento;

    //Calcula o valor corrigido
    valorCorrigido = calcValCorrigido(tipoInvestimento, valorInvestimento);
    cout<< "O valor corrigido após 30 dias é de: " << valorCorrigido << endl;

    //Verifica se houve erro no calculo
    if(valorCorrigido != 0){
        cout<< "O valor corrigido em 30 dias é de: " << valorCorrigido <<endl;

    }
}