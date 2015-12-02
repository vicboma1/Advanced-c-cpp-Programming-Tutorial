//
//  Figura.cpp
//  008 - Clean code
//
//  Created by Victor Bolinches Marin on 24/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include "Figura.hpp"
#include <iostream>
using namespace std;

Figura::Figura(){

}

void Figura::captura()
{
    cout << "CALCULO DEL AREA Y PERIMETRO" << endl;
    cout << "Escriba la altura: ";
    cin >> altura;
    cout << endl;
    cout << "Escribe la base: ";
    cin >> base;
    cout << endl;
}

string Figura::toString() {
    return "";
}