//Autor: Axel Molineros
//Fecha: 2024-07-08
// 3) Programa que transforma un número entero en su equivalente en letras - primera parte (realizado en clases)

#include <iostream>
using namespace std;

const string unidades[] = { "cero", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve",
"diez", "once", "doce", "trece", "catorce", "quince", "dieciseis", "diecisiete", "dieciocho", "diecinueve"};

//Devuelve las unidades del array de string 
string GetUnidades (int num){
    return unidades[num];
}

int main (){
    int num = 15;
    string resultado = GetUnidades (num);
    cout<<endl<< num << " en letras es: " << resultado;

 return 0; 
}