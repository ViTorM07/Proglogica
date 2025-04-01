#include <iostream>
#include <algorithm> // Para a função sort

using namespace std;

// Função para receber os valores
void receberValores(int &valor1, int &valor2, int &valor3, int &valor4) {
    cout << "Digite o primeiro valor (em ordem crescente): ";
    cin >> valor1;

    do{

        cout << "Digite o segundo valor (em ordem crescente): ";
        cin >> valor2;
        if(valor2 <= valor1){
            cout << " Erro! O segundo valor deve ser maior que o primeiro. " <<valor1 << endl;
        }

    }while(valor2<=valor1);


    
    do{
        cout << "Digite o terceiro valor (em ordem crescente): ";
        cin >> valor3;
        if(valor3 <= valor2){
            cout << "ERRO! O terceiro valor deve ser maior que o segundo." << valor2 << endl;
        }
    }while(valor3 <= valor2);    
    
    cout << "Digite o quarto valor (não necessariamente em ordem): ";
    cin >> valor4;
}

// Função para ordenar e mostrar os valores
void ordenarEExibir(int valor1, int valor2, int valor3, int valor4) {
    int valores[4] = {valor1, valor2, valor3, valor4};
    sort(valores, valores + 4); // Ordena os valores
    cout << "Os valores em ordem crescente são: ";
    for (int i = 0; i < 4; i++) {
        cout << valores[i] << " ";
    }
    cout << endl;
}

int main() {
    int valor1, valor2, valor3, valor4;

    // Recebe os valores
    receberValores(valor1, valor2, valor3, valor4);

    // Ordena e exibe os valores
    ordenarEExibir(valor1, valor2, valor3, valor4);

    return 0;
}