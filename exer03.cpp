#include <iostream>
using namespace std;
//3. Receba a base e a altura de um triângulo. Calcule e mostre a sua área.

int main(){
    float base, altura, area;
    cout<< " Digite a base e a altura do triângulo"<<endl;
    cout << "********BASE********" <<endl;
    cin >> base;
    cout << "********ALTURA*******"<<endl;
    cin >> altura;
    area = (base*altura)/2;
    cout <<"********ÁREA********" <<area<<endl;
}

/*VERSAO2
#include<iostream>
//Entre com a base e a altura de um triangulo e me mostre a area
int main(){
double base, altura, area;

std::cout<< "Digite a base do triangulo"<<std::endl;
std::cin>> base;

std::cout<< "Digite a altura do triangulo"<<std::endl;
std::cin>> altura;

area = (base*altura)/2;

std::cout<< " A area do triangulo é de: "<< area<< std::endl;

return 0;
}
*/