//
//  main.cpp
//  003 - bitset
//
//  Created by Victor Bolinches Marin on 30/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <bitset>
#include <iostream>
using namespace std;

enum BitOptions
{
    OPTION_1 = 0,
    OPTION_2 = 1,
    OPTION_3 = 2,
    OPTION_4 = 3,
    OPTION_5 = 4,
    OPTION_6 = 5,
    OPTION_7 = 6,
    OPTION_8 = 7
};

void showExample003(){
    bitset<8> *bits = new bitset<8>(0x2); // 0000 0010
    bits->set(OPTION_5);                  // 0001 0010
    bits->flip(OPTION_6);                 // 0011 0010
    bits->reset(OPTION_6);                // 0001 0010
    
    cout << "Bit 4 has value: " << bits->test(OPTION_5) << '\n';
    cout << "Bit 5 has value: " << bits->test(OPTION_6) << '\n';
    cout << "All the bits: " << *bits << '\n';
    
}

int main(int argc, const char * argv[]) {
    showExample003();
    return 0;
}
