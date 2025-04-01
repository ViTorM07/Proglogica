#include <iostream>
using namespace std;

//Receba um valor inteiro. Verifique e mostre se é divisível por 2 e 3.


int main(){
    //Recebe o numero inteiro
    cout << "Digite um valor inteiro: ";
    cin >> valor;

    //Verificar se é divisivel por 2 e 3
    if(valor %2 ==0 && valor%3 ==0){
        cout<<" O valor" << valor << "é Divisível por 2 e 3 " << endl;
        }else{
            cout << "O valor " << valor << não  é divisível 2 e 3" << endl;
        }
        return 0;
    }    


}