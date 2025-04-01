#include <iostream>
#include<limits>
#include<cstdlib>
#include<ctime>


//Receba 100 números inteiros reais. Verifique e mostre o maior e o menor valor.
// Obs.: somente valores positivos.
int main(){

    int num[99];
    int maior = std::numeric_limits<int>::min();
    int menor = std::numeric_limits<int>::max();;
    int rand;
    //set a random number


    for(int i = 0; i <100; i++){//itereaçao  para preencher o vetor
        std::cout<<"Digite um numero "<< std::endl; 
        std::cin >> num;
        if(num[i]<=0){//Validar numero
        
            std::cout << "Numero inválido. Digite um numero positivo. "<<std::endl;
            return 1;

        }
        if(num > menor){
            menor = num;
        }
        if(nume < maior){
            maior = num;
        }
        std::cout << "o MAIOR VALOR É: "<< <<std::endl
            
    }



}

