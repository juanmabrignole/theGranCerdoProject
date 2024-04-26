#include<iostream>
#include <cstdlib>
#include "rlutil.h"
/**el float es para numeros con coma
el int es para numeros enteros
el bool (booleano) para verdadero o falso
char para las letras
string es para las palabras completas
{ }
[]
VecNum[i - 1] se usa para acceder al elemento anterior en el vector,
permitiendo la comparación entre elementos sucesivos
y la determinación de si la secuencia está ordenada en forma creciente o no.

*/
using namespace std;
#include "Funciones.h"
/*TAREAS PENDIENTES
/// fijate  de poner en las opciones de jugar , estadisticas y creditos ,la opcion de volver al menu y que no te saquen
/// del compilador.osea que no lo cierre ya que la opcion para eso es salir, y en salir pone la opcion de confirmacion de que
/// quiere salir sea si o no.
// hace la logica de jugar , ya esta para ingresar los nombres pero falta el resto
///hace que ande la opcion de estadistica
/// pone los legajos que faltan en creditos
*/
/// esta funcion showitem recibe un constante char entero osea recibe el texto, las posiciones en x e y , y un booleano que me indique
/// si esta seleccionado o no.
/// const char* TEXT asi se pasa cuando es una cadena de caracteres
void showItem(const char* TEXT,int posx,int posy,bool select ){
// con este if aparece la barrita para indicarnos que esta seleccionado de una manera mas vistosa y que no.
if (select){
        //seleccionado con fondo verde claro
      rlutil::setBackgroundColor(rlutil::LIGHTGREEN );
 rlutil::locate(posx-3,posy);
        cout << (char)175<<" "<< TEXT<<" "<<(char)174<<" "<<endl;
}else{
    //sin seleccionar con fondo negro
      rlutil::setBackgroundColor(rlutil::BLACK );
 rlutil::locate(posx-3,posy);
      cout <<"  "<< TEXT<<"  " <<"  "<<endl;
}
      rlutil::setBackgroundColor(rlutil::BLACK);
 //rlutil::locate(posx,posy);
// aca vamos a poner que dibuje en pantalla TEXT (osea la cadena de caracteres)
//std::cout<< TEXT <<std::endl;
}
int main() {
///inicializacion para las opciones del menu
 /// a opcion le agregamos una variable inicializada en 0
   int opcion =1, y=0;
   rlutil::hidecursor();
   //esta opcion de rlutil te oculta el cursor (hidecursor)
   //int JUGAR;
   //int ESTADISTICAS;
   //int CREDITOS;
///inicializacion para vectores del las opciones 1,2,3,4
    bool controlador = true;
     while (controlador ){
           // system("cls");
  rlutil::setBackgroundColor(rlutil::BLACK );
  rlutil::setColor(rlutil::WHITE);




//usamos el rlutil en cls para limpiar la pantalla y en locate para ubicar el menu y los numeros dentro de los () son las
// coordenadas. la posicion "30" es la posicion inicial de la primer palabra. segun el N° que pongamos es donde arranca.
// y si pongo el "12" por ejemplo , me lo pone en la misma fila.
    //rlutil::cls();
        rlutil::locate(30,10);
        cout << "   Gran Cerdo   "<<endl;
        rlutil::locate(30,11);
        cout << "--------------"<<endl;
        rlutil::locate(30,12);
        cout << " 1)JUGAR "<<endl;
        rlutil::locate(30,13);
        cout << " 2)ESTADISTICAS "<<endl;
        rlutil::locate(30,14);
        cout << " 3)CREDITOS"<<endl;
        rlutil::locate(30,15);
        cout << " 0)SALIR "<<endl;
        rlutil::locate(30,16);
        cout << "--------------"<<endl;
        //en showitem como primer parametro le mandamos las opciones del menu
        // ejemplo 1)JUGAR , EN El segundo parametro le mandamos el 30 , el tercero el 12
        // como cuarto parametro mandamos el seleccionado poniendo lo que tiene y si es igual igual a 0 , como resultado manda verdadero(true)
        // y si no es igual igual a 0 porque es 2, osea es falso. va a cambiar por cada una de las opciones.
        // esto seria una operacion logica utilizando el operador de relacion.
        // va a devolver verdadero o falso segun baje  o suba " y " va cambiando segun cuanto valga.
    showItem(" 1)JUGAR        ",30,12,y==0 );
    showItem(" 2)ESTADISTICAS ",30,13,y==1 );
    showItem(" 3)CREDITOS     ",30,14,y==2 );
    showItem(" 0)SALIR        ",30,15,y==3 );
        rlutil::locate(30,12+y);
        // agregandole al comando rlutil::locate(30,12); una +y asi : rlutil::locate(30,12+y);
        // estando controlado por la key , que suba y baje
      //  cout << (char)175<<endl;
        int key = rlutil::getkey();
        // este comando representa un entero que estas presionando en el teclado ( getkey )
        //cout << "key "<<key<<endl;
        //rlutil::anykey();
        // este funcion espera que uno ingrese cualquier tecla ( anykey) por ende sirve para identificar que tecla
        //o numero de tecla o key , estoy tocando. diferenciando si esta en mayuscula o minuscula , cambia.
        //cin >> opcion;
        rlutil::locate(30,19);
        //system("cls");
       // opcion=1;
       // para mover el cursor hay que cambiar la posicion de Y en locate.
        int contador = 0;
        switch (key) {
            case 14 : // up
                 rlutil::locate(30,12+y);
                 cout <<" " <<endl;
                 // colocando aca ente comando de rlutil y cout antes del y-- o en el y++ lo que hace es dibujar un espacio
                 // en blanco para que se boore la flecha para seleccionar y se dibuje donde corresponde.
                 y--;
                 // el y con el menos menos es para que le quite uno y suba

               if (y<0){
                y=0;
               }


               // con este if pongo el limite inicial
                break;
            case 15: //down
                 rlutil::locate(30,12+y);
                 cout <<" " <<endl;
                 // colocando aca ente comando de rlutil y cout antes del y-- o en el y++ lo que hace es dibujar un espacio
                 // en blanco para que se boore la flecha para seleccionar y se dibuje donde corresponde.
                 y++;
                  // el y con el mas mas es para que suba
               if (y>3){
                y=3;
               }
                // con este if pongo el limite Final del menu para seleccionar.
                // se pone de 0 a 3 ya que cuenta desde el 0 la cantidad de opciones.

                break;

            case 1://enter
                system("cls");
                controlador = false;

                // aca hacemos otro switch para que podamos seleccionar las opciones. analizando el valor de y.
                switch(y){
                    case 0:
                        // en este caso apretamos enter y sale que es la opcion de jugar.
                      JUGAR();
                    break;
                  case 1:
                    // en este caso apretamos enter y sale que es la opcion de estadistica.
                     ESTADISTICAS();
                    break;
                case 2:
                    // en este caso apretamos enter y sale que es la opcion de creditos.
                    CREDITOS();
                    break;
                   case 3:
                        // en este caso apretamos enter y sale que es la opcion de salir.
                        cout << "Saliendo del programa. Hasta luego ";
                        return 0 ;
                        break;
                        }
                   default:

               break;
                cout << " Intente otra vez"<<endl;
        }
    }
}
