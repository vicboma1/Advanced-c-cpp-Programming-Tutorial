//
//  main.cpp
//  15 - File-IO
//
//  Created by Victor Bolinches Marin on 22/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

/** file.txt must be in the same path next to the file *.exe **/
#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;


void readFile(){
    string line;
    ifstream file_r("File.txt");
    bool isOpen = file_r.is_open();
    if (!isOpen)
    {
        cout << "Error file : Unable to open";
        return ;
    }
    
    while (getline (file_r,line))
    {
        cout << line << '\n';
    }
    file_r.close();
}

void writeFile(){
    ofstream file_w("File.txt", ios::app);
    bool isOpen = file_w.is_open();
    if (!isOpen)
    {
        cout << "Error file : Unable to open";
        return ;
    }

    file_w << "\n\n";
    file_w << "Victor Bolinches Marin";
    file_w.close();
}

void showExample15(){
    readFile();
    writeFile();
    readFile();
}


int main(int argc, const char * argv[]) {
    showExample15();
    return 0;
}
