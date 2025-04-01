#include<iostream> //ENTRADA E SAIDA
#include<vector> //CHAMAR VETOR
#include<algorithm>
#include<random>

using namespace std;

//Ordem crescente

int main(){
    //cout << <<endl;
    int tamanho;
    
    cout << "Digite o tamanho do vetor para ordenar: "<<endl;
    cin >> tamanho;

    //declarar vetor
    vector<int> numeros(tamanho);

    //Função random
    random_device rd; //seed
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100);

    //entrada:
    cout <<"Digite os numeros para preencher o vetor de tamanho "<<tamanho<<endl;
    for(int i = 0; i< tamanho; i++){
        numeros[i] = dis(gen);
    }

    //ORDENAÇÃO
    sort(numeros.begin(), numeros.end());

    //Exibindo o vetor ordenado
    cout<< "Vetor em ordem crescente: ";


    for(int num : numeros){
        cout << num << " ";
    }

    cout << endl;

    return 0;
    


    


}