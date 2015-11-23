//
//  main.cpp
//  04 - Pointers
//
//  Created by Victor Bolinches Marin on 19/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>

using namespace std;

void pointer() {
    
    int x;
    int* p;
    
    p = &x;
    cout << " int *p = &x " << endl;
    cout << " Please enter a number x = " << endl;
    cin >> x;
    cin.ignore();
    
    cout << "Value x = "<< x << endl;
    cout << "Address &x = "<< &x << endl;
    cout << "Pointer *p = "<< *p << endl;
    cout << "Set *p = "<< *p << endl;
    cin >> *p;
    cin.ignore();
    
    cout << "Value x = "<< x << endl;
    cout << "Address &x = "<< &x << endl;
    cout << "Pointer *p = "<< *p << endl;
    cout << "Set *p = "<< *p << endl;

    cin.get();
}

void pointerFromFreeMemory(){
    
    int* ptr = new int;
    cout << " int* ptr = new int" << endl;
    cout << " Please enter a number *ptr =  " << endl;
    cin >> *ptr;
    cin.ignore();
    
    cout << "Address &prt = "<< &ptr << endl;
    cout << "Pointer *ptr = "<< *ptr << endl;
    
    cin.get();
    
    delete ptr;
    
    cout << "Delete ptr"<< endl;
}

void showExample04(){
    pointer();
    pointerFromFreeMemory();
}


int main(int argc, const char * argv[]) {
    showExample04();
    return 0;
}
