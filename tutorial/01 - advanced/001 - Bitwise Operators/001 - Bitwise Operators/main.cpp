//
//  main.cpp
//  001 - Bitwise Operators
//
//  Created by Victor Bolinches Marin on 30/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>
using namespace std;

void _and(){
    
    unsigned int a = 60;	  // 0011 1100
    unsigned int b = 13;	  // 0000 1101
    
    cout << "  (60 = 0011 1100) " << endl;
    cout << " &(13 = 0000 1101) " << endl;
    cout << "____________________" << endl;
    cout << "   " << (a & b ) << " = 0000 1100 " << endl << endl;
    
    
    unsigned int c = 50;	  // 0011 1100
    unsigned int d = 35;	  // 0000 1101
    
    cout << "  (50 = 0011 0010) " << endl;
    cout << " &(35 = 0010 0011) " << endl;
    cout << "____________________" << endl;
    cout << "   " << (c & d ) << " = 0010 0010 " << endl << endl;
    
}

void _or(){
    
    unsigned int a = 60;	  // 0011 1100
    unsigned int b = 13;	  // 0000 1101
    
    cout << "  (60 = 0011 1100) " << endl;
    cout << " |(13 = 0000 1101) " << endl;
    cout << "____________________" << endl;
    cout << "   " << (a | b ) << " = 0011 1101 " << endl << endl;
    
    
    unsigned int c = 50;	  // 0011 1100
    unsigned int d = 35;	  // 0000 1101
    
    cout << "  (50 = 0011 0010) " << endl;
    cout << " |(35 = 0010 0011) " << endl;
    cout << "____________________" << endl;
    cout << "   " << (c | d ) << " = 0011 0011 " << endl << endl;

}

void _xor(){
    unsigned int a = 60;	  // 0011 1100
    unsigned int b = 13;	  // 0000 1101
    
    cout << "  (60 = 0011 1100) "  << endl;
    cout << " ^(13 = 0000 1101) "  << endl;
    cout << "____________________" << endl;
    cout << "   " << (a ^ b ) << " = 0011 0001 " << endl << endl;
    
    
    unsigned int c = 50;	  // 0011 1100
    unsigned int d = 35;	  // 0000 1101
    
    cout << "  (50 = 0011 0010) "  << endl;
    cout << " ^(35 = 0010 0011) "  << endl;
    cout << "____________________" << endl;
    cout << "   " << (c ^ d ) << " = 0010 0001 " << endl << endl;
}


void complement(){
    cout << "4 = 0100" << endl;
    cout << "~4 = 1111 1011 = " << (~4) << endl;
    cout << "~4 & 0x0F = 0000 1011 = " << (~4 & 0x0F) << endl << endl;
    
    unsigned int a = 4;
    cout << "unsigned ~4 = ... 1111 1111 1011 = " << (~a) << endl;
    cout << "4 = 0000 0100" << endl;
    cout << "~4 = 1111 1011 = " << (~4) << endl;
    cout << "~4 & 0xFF = 1111 1011 = " << (~4 & 0xFF) << endl << endl;
}


void leftShift(){
    cout << "3 = 0011" << endl;
    cout << "3 << 1 = 0011 << 1 = 0110 = " << (3 << 1) << endl;
    cout << "3 << 2 = 0011 << 2 = 1100 = " << (3 << 2) << endl;
    cout << "3 << 3 = 0011 << 3 = 0001 1000 = " << (3 << 3) << endl;
    cout << "(3 << 3) & 0x0F = 0011 << 3 = 1000 = " << ((3 << 3) & 0x0F) << endl << endl;
}

void rigthShift(){
    cout << "12 = 1100" << endl;
    cout << "12 >> 1 = 1100 >> 1 = 0110 = " << (12 >> 1) << endl;
    cout << "12 >> 2 = 1100 >> 2 = 0011 = " << (12 >> 2) << endl;
    cout << "12 >> 3 = 1100 >> 3 = 0001 = " << (12 >> 3) << endl;
    cout << "(12 >> 4) & 0x0F = 1100 >> 4 = 0000 = " << ((12 >> 4) & 0x0F) << endl;
}


void showExample001(){
    _and();
    _or();
    _xor();
    complement();
    leftShift();
    rigthShift();
}

int main(int argc, const char * argv[]) {
    showExample001();
    return 0;
}
