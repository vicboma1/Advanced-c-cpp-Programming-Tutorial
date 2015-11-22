//
//  main.cpp
//  11 - Parameter by references
//
//  Created by Victor Bolinches Marin on 22/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>
#include <sstream>

using namespace std;

void swap(string& str1, string& str2);
void swap(int& x, int& y);

void exampleString(){
    string hello = "World !!!!";
    string world = "Hello";
    
    cout << hello <<" "<< world <<endl;
    
    swap(hello, world);
    
    cout << hello <<" "<< world <<endl;
}

void exampleInt(){
    int x = 100;
    int y = 200;
    
    cout << "Value x: "<< x <<" Value y: "<< y <<endl;
    
    swap(x, y);
    
    cout << "Value x: "<< x <<" Value y: "<< y <<endl;
}

void exampleIntPointer(){
    int _x = 300;
    int _y = 400;
    int* x = &_x;
    int* y = &_y;
    
    cout << "Value x: "<< *x <<" Value y: "<< *y <<endl;
    
    swap(*x, *y);
    
    cout << "Value x: "<< *x <<" Value y: "<< *y <<endl;
}


void showExample12(){
    exampleString();
    exampleInt();
    exampleIntPointer();
}

void swap(string& str1, string& str2){
    string tmp;
    tmp = str1;
    str1 = str2;
    str2 = tmp;
    
    return ;
}

void swap(int& str1, int& str2){
    int tmp;
    tmp = str1;
    str1 = str2;
    str2 = tmp;
    
    return ;
}

int main(int argc, const char * argv[]) {
    showExample12();
    return 0;
}
