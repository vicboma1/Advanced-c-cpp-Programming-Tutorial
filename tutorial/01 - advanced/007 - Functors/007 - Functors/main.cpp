//
//  main.cpp
//  007 - Functors
//
//  Created by Victor Bolinches Marin on 01/12/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>
using namespace std;

class Math
{
private:
    int _x;
    
public:
    
    Math (int x) : _x( x ) {}
    
    int operator+ (int y) { return _x + y; }
    int operator- (int y) { return _x - y; }
    int operator* (int y) { return _x * y; }
};


void showExample007(){
    Math *math =  new Math(50);
    cout << "50 math->operator+(69) = " << math->operator+(69) << endl;
    cout << "50 math->operator-(69) = " << math->operator-(69) << endl;
    cout << "50 math->operator*(69) = " << math->operator*(69) << endl;

}

int main(int argc, const char * argv[]) {
    showExample007();
    return 0;
}
