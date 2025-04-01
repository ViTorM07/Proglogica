#include<iostream>
using namespace std;
//receba os coeficientes de uma equação de segundo grau e me mostre as raizes
int main(){
    double a,b,c;
    double delta, raiz1, raiz2;

    cout<<"Digite o coeficiente A";
    cin>>a;
    cout<<"Digite o coeficiente B";
    cin>>b;
    cout<<"Digite o coeficiente C";
    cin>>c;

    //calcula delta
    delta = (b*b)-2a*c;

    //calcula as raizes reais

    raiz1 = ((-b + sqrt(delta))) / (2*a);
    raiz2 = ((-b - sqrt(delta))) / (2*a);

    cout << "As raí'zes da equação são: "<< raiz1 << "e" << raiz 2;

    return 0;
}