#include<iostream>
using namespace std;
//22. Receba 2 valores inteiros e diferentes. Mostre seus valores em ordem
//crescente.

int main(){
    int a,b;
    cout << "Digite dois numeros em ordem crescente: "<<endl;
    cin >> a>> b;
    if(a==b){
        cout << "Os numeros são iguais: "<<endl;
    }else{
        if(a>b){
            cout << ""<< b<<" " <<a<<endl;
        }if(a<b){
            cout << ""<< a<<" "<<b<< endl;
        }
    }    
    return 0;

}