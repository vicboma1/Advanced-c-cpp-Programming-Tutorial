//
//  main.cpp
//  005 - Streams
//
//  Created by Victor Bolinches Marin on 01/12/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

void showExample005(){
    streampos size;
    char * memblock;
    
    ifstream file ("file.bin", ios::in|ios::binary|ios::ate);
    if (file.is_open())
    {
        size = file.tellg();
        memblock = new char [size];
        file.tellg();
        file.seekg (0, ios::beg);
        file.read (memblock, size);
        file.close();
        
        cout << "Content is in memory: " << (size) << "bytes"<< endl;
        cout << memblock << endl;
        
        delete[] memblock;
    }
    else
        cout << "Unable to open file";
}

int main(int argc, const char * argv[]) {
    showExample005();
    return 0;
}