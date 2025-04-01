#include <iostream>
#include <cmath>
//receba um vetor de inteiros e me mostre quais são primos
int main() {
    int numbers[] = {2, 13, 25, 100, 126, 708, 1001, 600};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int j = 0; j < size; j++) {
        int num = numbers[j];
        bool primo = true;

        if (num <= 1) {
            primo = false;
        } else {
            for (int i = 2; i <= sqrt(num); i++) {
                if (num % i == 0) {
                    primo = false;
                    break;
                }
            }
        }

        // Exibe o resultado
        if (primo == true) {
            std::cout << num << " é um número primo." << std::endl;
        } else {
            std::cout << num << " não é um número primo." << std::endl;
        }
    }

    return 0;
}
/*VERSAO 2:
#include <cstdio>
 int main() {
    int num;
    bool primo = true; // Solicita ao usuário que insira um número 
    printf("Digite um número: ");
    scanf("%d", &num);
    if (num <= 1) {
         primo = false; 
    } else { 
        for (int i = 2; i < num; i++){
            if (num % i == 0) { 
            primo = false;
            break;
            } 
        }
    } // Exibe o resultado 
    if (primo == true) {
        printf("%d é um número primo.\n", num);
        } else {
        printf("%d não é um número primo.\n", num); } 
    return 0;
}



*/