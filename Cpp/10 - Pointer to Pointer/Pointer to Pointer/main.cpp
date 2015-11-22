//
//  main.cpp
//  Pointer to Pointer
//
//  Created by Victor Bolinches Marin on 20/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>

using namespace std;

void showExample10(){
    int factor;
    int *p;
    int **pp;
    
    factor = 100;
    
    p = &factor;
    pp = &p;
    
    cout << "Value of factor :" << factor << endl;
    cout << "Value available at *p :" << *p << endl;
    cout << "Value available at **pp :" << **pp << endl <<endl;
    
    factor = 200;
    cout << "factor = " << factor << endl;
    cout << "Value available at *p :" << *p << endl;
    cout << "Value available at **pp :" << **pp << endl<<endl;
    
    *p = 300;
    cout << "*p = " << *p << endl;
    cout << "Value of factor :" << factor << endl;
    cout << "Value available at **pp :" << **pp << endl<<endl;
    
    **pp = 44;
    cout << "**pp  = " << **pp << endl;
    cout << "Value of factor :" << factor << endl;
    cout << "Value available at *p :" << *p << endl;
}

int main(int argc, const char * argv[]) {
    showExample10();
    return 0;
}
