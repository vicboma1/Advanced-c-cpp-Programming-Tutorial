//
//  main.cpp
//  004 - xor Encription
//
//  Created by Victor Bolinches Marin on 30/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>
#include <sstream>
using namespace std;

static char key = 'Z';
static int mask = 999009909;

void showExample004(){
    
    string name = "Victor Bolinches Marin";
    cout << name << endl;
    cout << "Encrytion" << endl;
    for(auto i = 0 ; i < name.size() ; i++ ){
        name[i] = name[i] ^ key + mask;
    }
    
    cout << name << endl;
    cout << "Decryption" << endl;
    
    for(auto i = 0 ; i < name.size() ; i++ ){
        name[i] = name[i] ^ key + mask;
    }
    
    cout << name << endl;
}

int main(int argc, const char * argv[]) {
    showExample004();
    return 0;
}
