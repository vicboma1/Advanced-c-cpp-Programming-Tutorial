//
//  main.cpp
//  008 - Clean code
//
//  Created by Victor Bolinches Marin on 24/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>
#include "Figura.hpp"
#include "Triangulo.hpp"
#include "Cuadrado.hpp"

using namespace std;

void showExample008(){
    Figura* triangulo = new Triangulo();
    Figura* cuadrado = new Cuadrado();
    
    triangulo->captura();
    cout << triangulo->toString() << endl;
    
    cuadrado->captura();
    cout << cuadrado->toString() << endl;
}

int main(int argc, const char * argv[]) {
    showExample008();
    return 0;
}
