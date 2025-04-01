#include<iostream>
#include<cmath>
using namespace std;
//Calcule e mostre o quadrado dos números entre 10 e 150.
int main(){
    int num= 10;    
    for(int i = 10; i<= 150; i++){
        cout << num <<" = "<<pow(num,2)<<endl;
        num++;
    }
    return 0;

}