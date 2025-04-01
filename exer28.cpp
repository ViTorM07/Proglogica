 #include<oistream>
using namespace std;

//Receba a hora de início e de final de um jogo (HH,MM) sabendo que o tempo máximo é de 24 horas e pode começar num dia e terminar noutro.
//Funcao para converter horas e minutos em minutos
int converMinutos(int horas, int minutos){
    return horas * 60 + minutos;
}

//Funcao para converter minutos totais em horas e minutos
void converHorasMinu(int totMinutos, int horas, int minutos){
    horas = totMinutos / 60;
    minutos = totMinutos % 60;
}



int main(){
    int horaInicio, minuInicio, horaFim, minFim;
    int totMinInicio, totMinufIM, duracaoMin;
    int duracaoHora, duracaoMinuRest;

    //Receba hora de inicio e de termino do jogo
    cout << "Digite a hora de inicio do jogo (HH MM)";
    cin >> horaInicio >> minuInicio
    cout << "Digite a hora de término (HH MM)";
    cin >> horaFim >> minuFim;

    //Converte as horas e minutos para minutos totais
    totMinInicio = converMinutos(horaInicio, minuInicio);
    totMinFim = converterMinutos(horaFim, minFim);

    //Calcula a duracao em minutos
    if(totMinFim >= totMinInicio){
        duracaoMinu = totMinuFim - totMinuInicio;
    }else{
        duracaoMinu = (24*60 - totMinuInicio) + totMinuFim;
    }

    //Converte a duraçao de minutos para horas e minuutos
    converterHorasMinu(duracaoMin, duracaoHora, duracaoMinuRest)

    //Exibir a duracao do jogo
cout << " A duração do jogo é: " << duracaoHoras << " horas e "<< duracaoMinuRest <<" minutos";

return 0;


}

