#include<iostream>
using namespace std;
//receba dois valores e troque-os
int main({
    double x,y,temp;

    cout << ("Digite o valor de x e y: ");
    cin >> x;
    cin >> y;

    // antes da troca:
    cout<< "Recebi os numeros"<< x << " e "<< y<<endl;

    //troca de valores
    temp =x;
     x= y;
     y=temp;

     //apos a troca

     cout <<" Agora os valores são: "<< x << " e " << y<<endl;

}