// Autor: Axel Molineros
// Fecha: 2024-07-08
// 1) Programa que ordena un vector de cadenas de caracteres. (realizado en clases).

#include <iostream>
using namespace std;


//Ordena el vector usando el algoritmo de ordenacion secuencial
void OrdenSecuencial ( string x [], int total ){
    for ( int k = 0; k < total; k++ ){
        for ( int j = k + 1; j < total; j++ ) {
            if ( x[ k ] > x[ j ] ) {
                //Intercambiar los valores
                string aux = x [ k ];
                x [ k ] = x [ j ];
                x [ j ] = aux;
            }
        }
    }
}
//Imprime los elementos del vector
void ImprimeVector ( string x [], int total ){
    for ( int k = 0; k < total; k++ ){
        cout <<endl<< x[k];
    }
}

int main (){
    const int MAX = 9;
    string nombres[] = { "Zambrano Juan", "Arevalo Ana", "Ponce Pedro", "De la Cruz Nancy",
    "Rivera Carlos", "Plata Maria", "Pila Carlos", "Oneto Luis", "Acevedo Luisa"};

    cout<<endl<<"Lista originial de estudiantes: ";
    ImprimeVector(nombres, MAX);

    cout<<endl<<"Lista ordenada de estudiantes: ";
    OrdenSecuencial(nombres, MAX);
    ImprimeVector(nombres, MAX);

 return 0; 
}