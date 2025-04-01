#include <iostream>

using namespace std;

// Definindo o tamanho do vetor como uma constante
const int TAMANHO = 50;

// Função para coletar os valores do vetor
void coletarVetor(int vetor[]) {
    for (int i = 0; i < TAMANHO; i++) {
        cout << "Digite o valor para a posição " << i + 1 << ": ";
        cin >> vetor[i];
    }
}

// Função para calcular a média dos valores entre 10 e 200
double calcularMedia(int vetor[]) {
    int soma = 0;
    int contador = 0;
    for (int i = 0; i < TAMANHO; i++) {
        if (vetor[i] >= 10 && vetor[i] <= 200) {
            soma += vetor[i];
            contador++;
        }
    }
    return (contador > 0) ? static_cast<double>(soma) / contador : 0;
}

// Função para calcular a soma dos números ímpares
int calcularSomaImpares(int vetor[]) {
    int soma = 0;
    for (int i = 0; i < TAMANHO; i++) {
        if (vetor[i] % 2 != 0) {
            soma += vetor[i];
        }
    }
    return soma;
}

int main() {
    int vetor[TAMANHO];

    // Coleta os valores do vetor
    coletarVetor(vetor);

    // Calcula a média dos valores entre 10 e 200
    double media = calcularMedia(vetor);

    // Calcula a soma dos números ímpares
    int somaImpares = calcularSomaImpares(vetor);

    // Exibe os resultados
    cout << "A média dos valores entre 10 e 200 é: " << media << endl;
    cout << "A soma dos números ímpares é: " << somaImpares << endl;

    return 0;
}