#include<iostream>
using namespace std;

//Receba 2 valores inteiros. Calcule e mostre o resultado da diferença do maior pelo menor valor

//Funcao para receber os valores inteiros
void receberValores(int va1, int val2){
    cout << "Digite o primeiro valor inteiro: ";
    cin >> val1;

    cout << "Digite o segundo valor:";
    cin >>val2;
}

//Funcao para calcular a diferenca entre o maior e menor valor
int calcDiferenca(int val1, int val2){
    int maior, menor;
    if(val1>val2){
        maior = val1;
        menor = val2;
    }else{
        maior = val2;
        menor = val1;
    }
    return maior - menor;   
}

//Exibir resultados
void exibicao(int diferenca){
    cout << " A diferença entre o maior e o menor valor é de: "<< diferenca << endl;

}

int main(){
    int val1, val2, diferenca;

    //Chama funcao e recebe os valores inteiros
    receberValores(val1, val2)

    //Chama e calcula a diferenca entre o maior e menor valor
    diferenca = calcDiferenca(val1, val2);

    //Exibe o resultado
    exibicao(diferenca);

    return 0;

}

/*VERSAO2 COM TERNARIO
#include <iostream>

using namespace std;

// Função para receber os valores reais
void receberValores(double &valor1, double &valor2) {
    cout << "Digite o primeiro valor real: ";
    cin >> valor1;
    cout << "Digite o segundo valor real: ";
    cin >> valor2;
}

// Função para calcular o maior valor
double calcularMaior(double valor1, double valor2) {
    return (valor1 > valor2) ? valor1 : valor2;
}

// Função para exibir o resultado
void exibirResultado(double maior) {
    cout << "O maior valor é: " << maior << endl;
}

int main() {
    double valor1, valor2, maior;

    // Recebe os valores reais
    receberValores(valor1, valor2);

    // Calcula o maior valor
    maior = calcularMaior(valor1, valor2);

    // Exibe o resultado
    exibirResultado(maior);

    return 0;
}
*/