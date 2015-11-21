//
//  main.cpp
//  000 - Storages
//
//  Created by Victor Bolinches Marin on 19/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>
#include "modulo.hpp"
using namespace std;

/**
 * Variable que se crea en la ejecución de un ámbito temporal.
 * Destroy automático.
 * [auto] <tipo> <nombre_variable>;
 */
void _auto(){
    auto int month = 0;
    cout << "auto int month " << month << endl <<endl;
}

/**
 * Indica al compilador una preferencia para que el objeto se almacene en un registro de la CPU, si es posible,
 * con el fin de optimizar su acceso, consiguiendo una mayor velocidad de ejecución.
 * static <tipo> <nombre_variable>;
 * static <tipo> <nombre_de_función>(<lista_parámetros>);
 */
void _register(register int *x){
    register char a = 'a';
    
    for(register int i=0; i < 10; i++) {
        cout << *x++ << " " << a++ << endl;
    }
    cout <<endl;
}

int incremento() {
    static int x=10;
        x++;
    return x;
}

/**
 * Asigna una dirección de memoria fija para el	objeto mientras el programa se esté ejecutando
 * No reside en memoria.
 * register <tipo> <nombre_variable>;
 */
void _static(){
    static int x=10;
    for(int i = 0; i < 10; i++){
        cout << i+1 << " : " << incremento() << endl;
    }
    cout<<endl;
}

/**
 * Se usa para indicar que el almacenamiento y valor de una variable o la definición de una función están
 * definidos en otro módulo o fichero fuente.
 * extern <tipo> <nombre_variable>;
 * [extern] <tipo> <nombre_de_función>(<lista_parámetros>);
 */
int x = 100;
extern int funcion();
void _extern(){
    cout << funcion() << endl;
}

/**
 * Sirve para que determinados miembros de un objeto de una estructura 
 * o clase declarado como constante, puedan ser modificados.
 * class/struct <identificador_clase> { mutable <tipo> <nombre_variable>; }
 */
struct st {
    int y;
   mutable int x;
};
void _mutable(){
    cout << "struct st { \nint y; \nmutable int x; \n};" << endl;
    const st A = {1, 2};
    cout << "x: "<< A.x << "y: " << A.y << endl;
    A.x = 0;
    cout << "A.x = 0; { x: "<< A.x << " y: " << A.y << " }" << endl;
}

void showExample000(){
    _auto();
    int s[10] = {1, 2, 1, 5, 2, 7, 3, 1, 3, 0};
    _register(s);
    _static();
    _extern();
    _mutable();
}

int main(int argc, const char * argv[]) {
    showExample000();
    return 0;
}
