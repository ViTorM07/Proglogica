#include<iostream>
using namespace std;

int main(){
    cout<< "*************************" <<endl;
    cout<<"Digite um numero para saber a TABUADA: " <<endl;
    cout<< " " <<endl;
    int n;
    cin>>n;
    int t = 0;
    for(int i = 0; i <= 10; i++){
        t = n*i;
        cout<<n <<" x "<< i << " = "<< t <<endl;
       
    }
    

}