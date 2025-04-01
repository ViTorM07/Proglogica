#include<iostream>
#include<cmath>

using namespace std;
//45 - Calcule e mostre a série 1 – 2/4 + 3/9 – 4/16 + 5/25 + ... + 15/225
    int main() {
        double soma = 0.0;
    
        for (int n = 1; n <= 15; n++) {
            double termo = (double)n / pow(n, 2); // n / n^2
    
            // Alterna o sinal: + para ímpar, - para par
            if (n % 2 == 0) {
                termo = -termo;
            }
    
            soma += termo;
            cout << n << ((n % 2 == 0) ? " / " : " / ") << n * n << " = " << termo << endl;
        }
    
        cout << "\nSoma da série: " << soma << endl;
    
        return 0;
    }
