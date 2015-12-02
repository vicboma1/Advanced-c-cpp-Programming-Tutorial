//
//  Figura.hpp
//  008 - Clean code
//
//  Created by Victor Bolinches Marin on 24/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#ifndef Figura_hpp
#define Figura_hpp

#include <stdio.h>
#include <sstream>

using namespace std;
class Figura {
    
protected:
    float base;
    float altura;

public:
    Figura();
    void captura();
    virtual string toString();
    virtual float perimetro() = 0;
    virtual float area() = 0;
};

#endif /* Figura_hpp */
