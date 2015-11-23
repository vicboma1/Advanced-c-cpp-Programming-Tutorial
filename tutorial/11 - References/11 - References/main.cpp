//
//  main.cpp
//  11 - References
//
//  Created by Victor Bolinches Marin on 22/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>
#include <sstream>

using namespace std;

/** References vs Pointers
 Las referencias son frecuentemente confundidas con los punteros.
 Hay tres diferencias:
    1: Las referencias nunca pueden ser NULL.
    2: Una referencias inicializada en un objeto no puede ser referenciada a otro objeto.
    3: Una referencia debe de ser inicializada cuando se crea el objeto.
 */

void variablesAndReferences(){

    int fooInt;
    double fooDouble;
    
    int &fooRefInt = fooInt;
    double &fooRefDouble = fooDouble;
    
    fooInt = 100;
    fooDouble = 777.7;
    
    cout << "Value fooInt : " << fooInt << endl;
    cout << "Value fooRefInt : " << fooRefInt  << endl;
    
    cout << "Value fooDouble : " << fooDouble << endl;
    cout << "Value fooRefDouble : " << fooRefDouble  << endl;
}

void showExample11(){
    variablesAndReferences();
}

int main(int argc, const char * argv[]) {
    showExample11();
    return 0;
}
