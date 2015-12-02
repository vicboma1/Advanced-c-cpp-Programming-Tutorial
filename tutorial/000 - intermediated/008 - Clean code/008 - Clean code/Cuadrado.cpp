//
//  Cuadrado.cpp
//  008 - Clean code
//
//  Created by Victor Bolinches Marin on 24/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include "Cuadrado.hpp"
#include "Figura.hpp"
#include <iostream>
#include <sstream>

using namespace std;

string Cuadrado::toString(){
    stringstream str;
    float perimetro = this->perimetro();
    float area = this->area();
    str << "Perimetro " << perimetro << " - Area: " << area << " del cuadrado";
    return str.str();
}

float Cuadrado::perimetro(){
    return (2 * (base + altura));
}

float Cuadrado::area(){
    return (base * altura)/2;
}
