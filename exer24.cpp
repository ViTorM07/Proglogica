#include <iostream>

using namespace std;

// Função para receber os valores inteiros
void receberValores(int &valor1, int &valor2) {
    cout << "Digite o primeiro valor inteiro: ";
    cin >> valor1;
    cout << "Digite o segundo valor inteiro: ";
    cin >> valor2;
}

// Função para mostrar os valores em ordem crescente
void mostrarOrdemCrescente(int valor1, int valor2) {
    if (valor1 < valor2) {
        cout << "Valores em ordem crescente: " << valor1 << ", " << valor2 << endl;
    } else {
        cout << "Valores em ordem crescente: " << valor2 << ", " << valor1 << endl;
    }
}

int main() {
    int valor1, valor2;

    // Recebe os valores inteiros
    receberValores(valor1, valor2);

    // Mostra os valores em ordem crescente
    mostrarOrdemCrescente(valor1, valor2);

    return 0;
}