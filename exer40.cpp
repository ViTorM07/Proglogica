#include <iostream>
#include <cmath>
//// Receba 2 números inteiros. Verifique e mostre todos os números primos //existentes entre eles.

// Função para verificar se um número é primo
bool ehPrimo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= std::sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int num1, num2;
    std::cout << "Digite dois números inteiros: ";
    std::cin >> num1 >> num2;

    // Garantir que num1 seja menor que num2
    if (num1 > num2) {
        std::swap(num1, num2);
    }

    std::cout << "Números primos entre " << num1 << " e " << num2 << " são: ";
    for (int i = num1; i <= num2; ++i) {
        if (ehPrimo(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}