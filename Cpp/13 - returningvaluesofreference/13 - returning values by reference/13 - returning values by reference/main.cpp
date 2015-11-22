//
//  main.cpp
//  13 - returning values by reference
//
//  Created by Victor Bolinches Marin on 22/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>
using namespace std;

/*int _size(int *obj){
    return (sizeof(obj)/sizeof(*obj));
}*/

int& set(int obj [], int i )
{
    return obj[i];
}

void showExample13(){
    
    int arrayInt [] = {0,1,2,3,4,5};
    
    int size = 6;
    for (int i = 0; i< size; i++) {
        cout << "arrayInt[" << i << "] = ";
        cout << arrayInt[i] << endl;
    }
    
    cout <<""<< endl;
    cout <<"set(arrayInt,0) = 999;"<< endl;
    cout <<"set(arrayInt,1) = 444;"<< endl;
    cout <<""<< endl;
    
    set(arrayInt,0) = 999;
    set(arrayInt,1) = 444;
    
    for (int i = 0; i< size; i++) {
        cout << "arrayInt[" << i << "] = ";
        cout << arrayInt[i] << endl;
    }
    
}

int main(int argc, const char * argv[]) {
    showExample13();
    return 0;
}
