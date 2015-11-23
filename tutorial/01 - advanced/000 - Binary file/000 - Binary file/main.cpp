//
//  main.cpp
//  000 - Binary file
//
//  Created by Victor Bolinches Marin on 22/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

void showExample000(){
    streampos size;
    char* memblock;
    
    ifstream file("File.bin", ios::in | ios::binary | ios::ate);
    if (!file.is_open()){
        cout << "Unable to open file";
        return ;
    }
    
    size = file.tellg();
    memblock = new char [size];
    file.seekg (0, ios::beg);
    file.read (memblock, size);
    file.close();
    
    cout << "the entire file content is in memory";
    cout << memblock <<endl;
    cout << "delete[] memblock;" << endl << endl;
    delete[] memblock;
}

int main(int argc, const char * argv[]) {
    showExample000();
    return 0;
}
