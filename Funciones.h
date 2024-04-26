#ifndef Funciones_H_INCLUDED
#define Funciones_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <locale>
#include "rlutil.h"

void JUGAR(){
   char jugador1[15] ,jugador2[15] ;

///Antes de comenzar el juego debe solicitar a quienes participan el nombre.

    cout << "Jugador n°1 ingrese el nombre ";
    cin >>jugador1;
    cout << "Jugador n°2 ingrese el nombre ";
    cin >>jugador2;
/*
    while (  != 0) {
        cout << " ";
        cin >> ;
        cout << " ";
        cin >> ;
        cout << " ";
        cin >> ;
        cout << " ";
        cin >> ;
        cout << " ";
        cin >> ;
        cout << " ";
        cin >> ;

//////////////////carga de datos///////////////////////////////////////////////////////////////////////////////////////////

// ESTADISTICAS:

// CREDITOS:

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        cout << " ";
        cin >> ;
      }
    */
    }
//ESTADISTICAS:
int ESTADISTICAS( ){
     cout << "estadisticas del programa. ";

}
// CREDITOS:
int CREDITOS( ){
 cout << " CREDITOS DEL PROGRAMA  "<<endl;
 cout << "                        "<<endl;
 cout << "  Grupo 10 , La pulga   "<<endl;
 cout << "                        "<<endl;
 cout << " Joel Roman Urbanski    "<< "Legajo : "<<" 27714 "<<endl;
 cout << " Sebastian  Carracedo   "<< "Legajo : "<<" 25843 "<<endl;
 cout << " Juan Manuel Brignole   "<< "Legajo : "<<"       "<<endl;
 cout << " Milagros Puente Flores "<< "Legajo : "<<"       "<<endl;
 cout << " Nayla Belén Correa     "<< "Legajo : "<<"       "<<endl;

}

// te muestra el mesaje correspondiente al valor de y que envias
void mostrarSeleccion(int y){
switch(y){
case 0:
    cout<<"La opcion de jugar";
    break;
    case 1:
    cout<<"La opcion de estadisticas";
    break;
    case 2:
    cout<<"La opcion de creditos";
    break;
    case 3:
    cout<<"Serguro de salir? press enter";
    break;
}

return;

}
#endif // Funciones_H_INCLUDED
