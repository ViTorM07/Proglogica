#include<iostream>
// Calcule a quantidade de grãos contidos em um tabuleiro de xadrez onde:
// Casa: 1 2 3 4 ... 64
// Qdte: 1 2 4 8 ... N

int main() {
    unsigned long long totalGraos = 0;
    unsigned long long graosNaCasa = 1;

    for (int casa = 1; casa <= 64; ++casa) {
        std::cout <<"CASA: "<< casa <<std::endl;
        totalGraos += graosNaCasa;
        std::cout <<"TOTAL DE GRÃOS: "<<totalGraos <<std::endl;
        graosNaCasa *= 2;
        std::cout <<"GRÃOS NA CASA: "<<graosNaCasa <<std::endl;
    }
    std::cout << "A quantidade total de grãos no tabuleiro é: " << totalGraos <<std::endl;

    return 0;
}
