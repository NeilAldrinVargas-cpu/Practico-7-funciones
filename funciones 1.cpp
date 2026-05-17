#include <iostream>
#include <cmath>

using namespace std;

float POTENCIA(float base, float exponente);

 int main(){
     float base, exponente;

     cout<<"\n----Calculadora de prototipos----\n"<<endl;
     cout<<"Ingrese el valor de la base:";
     cin>>base;
     cout<<"Ingrese el valor del exponete:";
     cin>>exponente;

  float resultado=POTENCIA(base,exponente);

  cout<<"El resultado es: "<<resultado<<endl;

 return 0;
 }

 float POTENCIA(float base, float exponente){
     float resultado=pow(base, exponente);
 return resultado;
 }
