//
//  main.cpp
//  16 - Typecasting
//
//  Created by Victor Bolinches Marin on 23/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>
using namespace std;

void cast(){
    for ( int x = 65; x <= 90; x++ ) {
        cout<< x <<" - "<< (char)x <<"   ";
    }
}

void staticCast(){
    for ( int x = 97; x <= 122; x++ ) {
        cout<< x <<" - "<< static_cast<char>(x) <<"   ";
    }
    
}
void showExample(){
    cast();
    staticCast();
}


int main(int argc, const char * argv[]) {
    showExample();
    return 0;
}
