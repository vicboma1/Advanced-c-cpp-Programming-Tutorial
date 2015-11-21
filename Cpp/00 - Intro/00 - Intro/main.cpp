//
//  Intro.cpp
//  Cpp
//
//  Created by Victor Bolinches Marin on 19/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void showExample00(){
    int number;
    
    cout << "Hello World" << endl;
    cout << "Please enter a number: " << endl;
    cin >> number;
    cin.ignore();
    cout << "You entered: "<< number << endl;
    cin.get(); // wait a press key to finish
}

int main()
{
    showExample00();
    return 0 ;
}



/**
 Hello World
 Please enter a number:
 12
 You entered: 12
 
 Program ended with exit code: 0
 */