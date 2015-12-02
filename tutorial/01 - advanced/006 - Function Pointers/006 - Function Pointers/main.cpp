//
//  main.cpp
//  006 - Function Pointers
//
//  Created by Victor Bolinches Marin on 01/12/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>
using namespace std;

int Muestra1();
int Muestra2();

int (*pMuestra)();
void (*pEjecuta)(int);

int Muestra1() {
    cout << "Muestra 1" << endl;
    return 1;
}

int Muestra2() {
    cout << "Muestra 2" << endl;
    return 2;
}

void Ejecuta(int resutl){
    cout << " y ejecuta: "  << resutl << endl;
}


void showExample006(){

        int num;
        pEjecuta = &Ejecuta;
    
        
        do {
            cout << "Introduce un número entre 1 y 2, " << "0 para salir: ";
            cin >> num;
            if(num >= 1 && num <=2) {
                switch(num) {
                    case 1:
                        pMuestra = &Muestra1;
                        break;
                    case 2:
                        pMuestra = &Muestra2;
                        break;
                }
                if(num != 0 )
                    pEjecuta(pMuestra());
            }
        } while(num != 0);
    }
    
    
int main(int argc, const char * argv[]) {
    showExample006();
    return 0;
}
