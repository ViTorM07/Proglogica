#include<iostream>
using namespace std;
//Entre com o comprimento, largura e altura de um paralelepipedo e me mostre o volume
int main(){
    double comp, larg, alt, vol;

    //entrada de valoes
    cout <<"Digite o comprimento do parlelepipedo"
    cin>>comp;
    cout <<"Digite a largura de um paralelepipedo";
    cin>>larg;
    cout <<"Digite a altura de um paralelepípedo";
    cin>>alt;

    //calcula o volume

    vol = com* larg*alt;

    //resultado final do volume: 
    cout<< " volume do paralelepípedo é de: "<< vol<<endl;

    return 0;
}