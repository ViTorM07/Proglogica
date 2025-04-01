#include <iostream>

using namespace std;

// Função para receber as notas bimestrais
void receberNotas(double &nota1, double &nota2, double &nota3, double &nota4) {
    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;
    cout << "Digite a terceira nota: ";
    cin >> nota3;
    cout << "Digite a quarta nota: ";
    cin >> nota4;
}

// Função para calcular a média aritmética
double calcularMedia(double nota1, double nota2, double nota3, double nota4) {
    return (nota1 + nota2 + nota3 + nota4) / 4;
}

// Função para exibir a mensagem de acordo com a média
void exibirMensagem(double media) {
    cout << "A média aritmética é: " << media << endl;
    if (media >= 6.0) {
        cout << "APROVADO" << endl;
    } else if (media >= 3.0) {
        cout << "EXAME" << endl;
    } else {
        cout << "RETIDO" << endl;
    }
}

int main() {
    double nota1, nota2, nota3, nota4, media;

    // Recebe as notas bimestrais
    receberNotas(nota1, nota2, nota3, nota4);

    // Calcula a média aritmética
    media = calcularMedia(nota1, nota2, nota3, nota4);

    // Exibe a mensagem de acordo com a média
    exibirMensagem(media);

    return 0;
}