#include<iostream>
//33. Série harmonica.Receba um número. Calcule e mostre a série 1 + 1/2 + 1/3 + ... + 1/N.
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n <= 0){
        cout << "Nao é válido!" << endl;
        return 1;
    }

    double s = 0.0;
    for(int i = 1; i <= n; i++){        
        cout<< sum <<endl;
        s = 1.0 / i;
    }
    cout << "The result of the series is: " << sum << endl;
}