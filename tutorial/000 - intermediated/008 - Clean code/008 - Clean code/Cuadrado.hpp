//
//  Cuadrado.hpp
//  008 - Clean code
//
//  Created by Victor Bolinches Marin on 24/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#ifndef Cuadrado_hpp
#define Cuadrado_hpp

#include <stdio.h>
#include "Triangulo.hpp"
#include "Figura.hpp"
#include <iostream>
#include <sstream>
using namespace std;

class Cuadrado: public Figura {
    
public:
    Cuadrado(){}
    string toString();
    float perimetro();
    float area();
    
};

#endif /* Cuadrado_hpp */
