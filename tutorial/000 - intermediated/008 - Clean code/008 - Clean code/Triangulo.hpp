//
//  Triangulo.hpp
//  008 - Clean code
//
//  Created by Victor Bolinches Marin on 24/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#ifndef Triangulo_hpp
#define Triangulo_hpp

#include <stdio.h>
#include "Triangulo.hpp"
#include "Figura.hpp"
#include <iostream>
#include <sstream>
using namespace std;

class Triangulo: public Figura {
    
public:
    Triangulo(){}
    string toString();
    float perimetro();
    float area();

};

#endif /* Triangulo_hpp */
