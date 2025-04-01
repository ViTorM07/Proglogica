#include <iostream>
// defina o terceiro angulo de um triangulo
int main(){
    double ang1, ang2, ang3;

    //recebe os dois angulos do triangulo
    cout<< "Digite o valor do primeiro angulo do triangulo:";
    cin>> ang1
    cout<<"Digite o valor do segundo angulo do triangulo");
    cin>>ang2;

    //calcula o valor do terceiro angulo
    ang3 = 180 - (ang1+ang2);

    //mostra o valor do terceiro angulo
    cout << "O valor do terceiro angulo do triangulo é de: "<< ang3 << endl;

    return 0;
}