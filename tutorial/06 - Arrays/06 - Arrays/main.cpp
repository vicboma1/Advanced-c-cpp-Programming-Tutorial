//
//  main.cpp
//  06 - Arrays
//
//  Created by Victor Bolinches Marin on 19/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>
using namespace std;
const int MAX = 3;

void intArrayPointer(){
    int  var[MAX] = {99, 100, 20};
    int *ptr[MAX];
    
    for(int i = 0; i < MAX; i++)
    {
        ptr[i] = &var[i]; // assign the address of integer.
        cout << "Value of var[" << i << "] = ";
        cout << *ptr[i] << endl;
    }
    cout << endl;
}

void charArrayPointer(){
    //Equivalent, but does not allow "char* _names[MAX] ..." in c++11·
    char* _names[MAX] = { "Victor", "Manuel", "Bolinches"};
    string names[MAX] = { "Victor", "Manuel","Bolinches"};
    
    for (int i = 0; i < MAX; i++)
    {
        cout << "Value of names[" << i << "] = ";
        cout << _names[i] << " "<< names[i] << endl;
    }
    
    cout << endl;
}

void pointerToArray(){
    double sizes[3] = { 2.45, 23.4, 33.3 };
    double* p;
    
    p = sizes;
    cout << "Array values using pointer" << endl;
    for(int i= 0;i < 3 ; i++){
        cout << "*(p + " << i << ") : ";
        cout << *(p+i)<<endl;
       
    }
    cout << "Array values using balance as address " << endl;
    for ( int i = 0; i < 3; i++ )
    {
        cout << "*(size + " << i << ") : ";
        cout << *(sizes + i) << endl;    }
    
}

void showExample06(){
    intArrayPointer();
    charArrayPointer();
    pointerToArray();
}

int main(int argc, const char * argv[]) {
    showExample06();
    return 0;
}
