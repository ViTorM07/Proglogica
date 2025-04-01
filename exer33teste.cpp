#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 0) {
        cout << "Nao é válido!" << endl;
        return 1; // Finaliza a função main e retorna 1 para indicar erro
    }

    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        cout << sum<< endl;
        sum = 1.0 / i;
    }

    cout << "The result of the series is: " << sum << endl;
    return 0; // Finaliza a função main e retorna 0 para indicar sucesso
}