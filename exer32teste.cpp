#include <iostream>

using namespace std;

 long fatorial(int n) {
     long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int num;
    cout << "Digite um número inteiro: ";
    cin >> num;

    if (num < 0) {
        cout << "Fatorial não definido para números negativos.\n";
    } else {
        cout << "O fatorial de " << num << " é " << fatorial(num) << endl;
    }

    return 0;
}