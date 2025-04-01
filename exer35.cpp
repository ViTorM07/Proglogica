#include<iostream>

//Receba 2 números inteiros, verifique qual o maior entre eles. Calcule e
//mostre o resultado da somatória dos números ímpares entre esses valores.
int main(){
    int n1,n2;
    int maior;
    int somat =0;
    int i = 0;
    std::cout << "Entre com dois números: ";

    std::cin >> n1 >> n2;

    if(n1>n2){
        maior = n1;
        i = n2;
        while(i<=maior){
            
            if(i%2 != 0){
                std::cout << i << std::endl;
                somat+=i;
                std::cout << "Somatoria acumulada = " << somat << std::endl;
            }
            i++;
        }
    }
    if(n2 > n1){
        maior = n2;
        i = n1;
        while(i<=maior){
            
            if(i % 2 != 0){
                std::cout << i << std::endl;
                somat+=i;
                std::cout << "Somatoria acumulada = " << somat << std::endl;
            }
            i++;
        }
    }

}