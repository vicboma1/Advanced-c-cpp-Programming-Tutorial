//
//  Triangulo.cpp
//  008 - Clean code
//
//  Created by Victor Bolinches Marin on 24/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include "Triangulo.hpp"
#include "Figura.hpp"
#include <iostream>
#include <sstream>
using namespace std;

string Triangulo::toString(){
    stringstream str;
    float perimetro = this->perimetro();
    float area = this->area();
    str << "Perimetro " << perimetro << " - Area: " << area << " del Triangulo";
    return str.str();
}
    
float Triangulo::perimetro(){
    return (2 * (base + altura));
}
    
float Triangulo::area(){
    return (base * altura);
}
