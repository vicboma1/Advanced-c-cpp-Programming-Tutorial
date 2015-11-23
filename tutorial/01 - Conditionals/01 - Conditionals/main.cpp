//
//  Conditionals.cpp
//  Cpp
//
//  Created by Victor Bolinches Marin on 19/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <stdio.h>
#include <sstream>
#include <iostream>

using namespace std;

bool isMaxEq(int a, int b){
    return (a >= b);
}

string formalizeString(bool result){
    return (result) ? "Yes" : "No"; // operador ternario [ if(result) "Yes" else "No" ]
}

void showExample01() {
    int num1, num2;
    cout << "Please enter a number: " << endl;
    cin >> num1;
    cin.ignore();
    cout << "Please enter other number: " << endl;
    cin >> num2;
    cin.ignore();
    cout << "is " << num1 << " Max or Eq Than " << num2 << " ?" << endl;
    bool res = isMaxEq(num1, num2);
    string str = formalizeString(res);
    cout << "Result: "<< str << endl;
    cin.get();
}

int main()
{
    showExample01();
    return 0 ;
}


/**
 Please enter a number:
 32
 Please enter other number:
 3
 is 32 Max or Eq Than 3 ?
 Result: Yes
*/