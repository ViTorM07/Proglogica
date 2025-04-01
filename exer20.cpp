#include <iostream>
#include <cmath> // Para a função sqrt

using namespace std;

// Função para receber os coeficientes
void receberCoeficientes(double &A, double &B, double &C) {
    cout << "Digite o coeficiente A: ";
    cin >> A;
    cout << "Digite o coeficiente B: ";
    cin >> B;
    cout << "Digite o coeficiente C: ";
    cin >> C;
}

// Função para calcular o discriminante (delta)
double calcularDelta(double A, double B, double C) {
    return (B * B) - (4 * A * C);
}

// Função para calcular as raízes
void calcularRaizes(double A, double B, double delta, double &raiz1, double &raiz2) {
    raiz1 = (-B + sqrt(delta)) / (2 * A);
    raiz2 = (-B - sqrt(delta)) / (2 * A);
}

// Função para exibir o resultado
void exibirResultado(double delta, bool temRaizesReais, double raiz1, double raiz2) {
    if (temRaizesReais) {
        if (delta > 0) {
            cout << "A equação tem duas raízes reais e distintas: " << raiz1 << " e " << raiz2 << endl;
        } else {
            cout << "A equação tem uma raiz real: " << raiz1 << endl;
        }
    } else {
        cout << "A equação não tem raízes reais." << endl;
    }
}

int main() {
    double A, B, C, delta, raiz1, raiz2;

    // Recebe os coeficientes
    receberCoeficientes(A, B, C);

    // Calcula o discriminante (delta)
    delta = calcularDelta(A, B, C);

    // Verifica a existência de raízes reais
    bool temRaizesReais = (delta >= 0);

    // Calcula as raízes se existirem
    if (temRaizesReais) {
        calcularRaizes(A, B, delta, raiz1, raiz2);
    }

    // Exibe o resultado
    exibirResultado(delta, temRaizesReais, raiz1, raiz2);

    return 0;
}