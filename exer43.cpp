#include <iostream>

int main() {
    // Alturas iniciais em metros
    double alturaAna = 1.10;
    double alturaMaria = 1.50;

    // Taxas de crescimento anual em metros
    double crescimentoAna = 0.03;
    double crescimentoMaria = 0.02;

    int anos = 0;

    // Loop até que Ana seja mais alta que Maria
    while (alturaAna <= alturaMaria) {
        alturaAna += crescimentoAna;
        alturaMaria += crescimentoMaria;
        anos++;
    }

    std::cout << "Serao necessarios " << anos << " anos para que Ana seja mais alta que Maria." << std::endl;
    std::cout << "Altura de Ana: " << alturaAna << " metros" << std::endl;
    std::cout << "Altura de Maria: " << alturaMaria << " metros" << std::endl;

    return 0;
}