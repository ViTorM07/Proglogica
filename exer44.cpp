#include <iostream>
#include <limits>

using namespace std;

int main() {
    const int NUM_COUNT = 10
    ;
    double num;
    double maior = numeric_limits<double>::min();
    double menor = numeric_limits<double>::max();

    for (int i = 0; i < NUM_COUNT; i++) {
        cout << "Digite um número positivo (" << i + 1 << "/" << NUM_COUNT << "): ";
        cin >> num;

        // Verifica se o número é positivo
        if (num < 0) {
            cout << "Número inválido. Digite um número positivo." << endl;
            i--; // Decrementa o contador para repetir a entrada
            continue;
        }

        // Atualiza o maior e o menor valor
        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
    }

    // Mostra o maior e o menor valor
    cout << "O maior valor é: " << maior << endl;
    cout << "O menor valor é: " << menor << endl;

    return 0;
}