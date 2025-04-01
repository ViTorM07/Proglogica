#include<iostream>
#include<cmath>
using namespace std;
//// Receba um número inteiro. Calcule e mostre o seu fatorial
int Fatorial(int num){
    int fatorial = 1;
    for(int i = 1; i <= num;i++){
        fatorial *= i;
    }
    return fatorial;
}
;

int main(){
    int n;

    //Recebe o numero inteiro
    cout << "Digite um numero inteiro: ";
    cin >> n;


    cout << "Fatorial de: " <<n << " = " << Fatorial(n) <<endl;

    return 0;

}