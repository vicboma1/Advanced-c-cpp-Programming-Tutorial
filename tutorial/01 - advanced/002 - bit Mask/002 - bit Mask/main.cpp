//
//  main.cpp
//  002 - bit Mask
//
//  Created by Victor Bolinches Marin on 30/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>
using namespace std;

void showExample002(){
    const unsigned int lowMask = 0xF; // 0000 1111
    
    int num = 0xFF;
    cout << "0xFF = 1111 1111 = 255" <<endl;
    
    num &= lowMask;
    
    std::cout << "The 4 low bits have value: " << num << endl;
}

int main(int argc, const char * argv[]) {
    showExample002();
    return 0;
}
