#include <iostream>
//Receba a quantidade de alimento em quilos. Calcule e mostre quantos dias durará esse alimento sabendo que a pessoa consome 50g ao dia.

int main(){
    double qtdAliKG, qtdaliG;
    int dias;

    // Recebe a quantidade de alimentos em Quilos
    cout << "Digite a quantidade de alimentos em Quilos: ";
    cin >> qtdAliKG;

    //Converte a quantidade de alimentos em gramas
    qtdaliG = qtdAliKG * 1000;

    //Calcula quantos dias durará o alimento
    dias = qtdAliG/ 50;

    //Mostra o numero de dias que durará o alimento
    cout << "O alimento durará " << dias << "dias "<< endl;

    return 0;
    

}