//
//  main.cpp
//  Switch
//
//  Created by Victor Bolinches Marin on 19/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>

using namespace std;

int module2(int num){
    int mod = num % 2;
    switch ( mod ) {
        case 0:
            return 0;
            break;
        case 1:
            return 1;
            break;
        default:
            return -1;
            break;
    }
}


void play()
{
    cout << "Play called" << endl;
}
void save()
{
    cout << "Save called" << endl;
}
void load()
{
    cout << "Load called" << endl;
}
void exit()
{
    cout << "Exit called" << endl;
}

void menu()
{
    int input;
    cout << "1. Play" << endl;
    cout << "2. Save" << endl;
    cout << "3. Load" << endl;
    cout << "4. Exit" << endl;
    cout << "Option: ";
    cin>> input;
    switch (input) {
        case 1: play(); break;
        case 2: save(); break;
        case 3: load(); break;
        case 4: exit(); break;
        default: cout<<"Error, Bad input"<< endl; break;
    }
    cin.get();
}

void showExample03(){
    cout<< "10 mod 2 = " << module2(10) << endl;
    cout<< "11 mod 2 = " << module2(11) << endl<<endl;
    
    menu();
}

int main(int argc, const char * argv[]) {
    showExample03();
    return 0;
}
