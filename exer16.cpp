#include<iostream>

//16. Receba a quantidade de horas trabalhadas, o valor por hora, o percentual
//de desconto e o número de descendentes. Calcule o salário que serão as
//horas trabalhadas x o valor por hora. Calcule o salário líquido (= Salário
//Bruto – desconto). A cada dependente será acrescido R$ 100 no Salário
//Líquido. Exiba o salário a receber.
double calcularSalBruto(double horasTrab,double valHora){
    return horasTrab * valHora;
}

double calcDesconto(double salBruto, double percDesconto){
    return salBruto * (percDesconto / 100);
}

//Funçao para calcular salario liquido
double calSalLiq(double salBruto, double desconto, int numeroDesc){
    double salLiq = salBruto - desconto;
    salLiq += numeroDesc * 100;
    return salLiq;
}

//procedimento para receber os dados
void receberDados(double horasTrab, double valHora, double percDesconto, int numDesc){
    cout<< "Digite a quantidade de horas trabalhadas no mes:";
    cin >> horasTrab;
    
    cout << "Digite o valor por hora: ";
    cin >> valHora;

    cout<< "Digite o percentual de desconto: "; 
    cin >> percDesconto;

    cout << "Digite o numero de descendentes: ";
    cin >> numDesc;
}

//Procedimento para exibir o resultado
void exibirResultado(double salBruto, double desconto, double salLiq ){
    cout << "Salario Bruto: R$" <<salBruto << endl;
    cout<< "Desconto: R$ "<< desconto << endl;
    cout << "Salário Liquido: R$ "<< salLiq <<endl;

}

int main(){
    double horasTrab, valHora, percDesconto;
    int numDesc;

    //Receber os parametros
    receberDados(horasTrab, valHora, percDesconto, numDesc);

    //Calcula Salario Bruto
    double salBruto = calcularSalBruto(horasTrab, valHora);

    //Calcular Desconto
    double desconto = calcDesconto(salBruto, percDesconto);

    //Calcula o salario liquido
    double salLiq = calSalLiq(salBruto, desconto, numDesc);

    //Exibe o resultado
    exibirResultado(salBruto, desconto, salLiq);

    return 0;

}