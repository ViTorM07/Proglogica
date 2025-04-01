#include<iostream>
using namespace std;
//Entre com a temperatura em celsius e me mostre a temperatura em fahrenheit
int main(){
    double celsius, fahren;

    cout<< "Digite a temperatura em Celsius"<<endl;
    cin>> celsius;

    fahren =(9 * celsius+160)/5;

    cout<< "A temperatura em fahrenheit é de: " << fahren<<endl; 
    return 0;


}