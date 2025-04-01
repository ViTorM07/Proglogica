#include <iostream>
using namespace std;

//Receba o ano de nascimento e o ano atual. Calcule e mostre a sua idade equantos anos terá daqui a 17 anos.
int main(){
    int anoNascimento, anoAtual, idade, idadeFutura
    //recebe o ano de nascimento atual

    cout << "Digite o ano de nascimento: ";
    cin >> anoNascimento; 
    cout << "Digite o ano atual: ";
    cin>> anoAtual;

    //calcula a idade atual
    idadeAtual = anoAtual - anoNascimento;

    //Calcula a idade daqui 17 anos
    idadeFutura = idadeAtual + 17;

    //Mostra a idade atual e a idade futura
    cout << "A sua idade atual é de : " << idadeAtual << " anos"<<endl;
    cout << "A sua idade daqui 17 anos é de: "<< idadeFutura<<endl;

    return 0;
}