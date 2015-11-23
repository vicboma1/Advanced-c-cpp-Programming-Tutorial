//
//  main.cpp
//  PointervsArrays
//
//  Created by Victor Bolinches Marin on 19/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>

using namespace std;

const int SIZE = 3;

void showExample08(){
    int  array[SIZE] = {111, 222, 333};
    for (register int i = 0; i < SIZE; i++)
    {
        cout << "Value of array[" << i << "] = ";
        cout << *array << endl;
        
        //set values - An array name generates a pointer constant
        *array = i;    // This is a correct syntax
        //array++;        This is incorrect.
    }
}

int main (int argc, const char * argv[])
{
    showExample08();
    return 0;
}
