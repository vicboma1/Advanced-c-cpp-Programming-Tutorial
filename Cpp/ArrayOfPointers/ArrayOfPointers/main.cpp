//
//  main.cpp
//  ArrayOfPointers
//
//  Created by Victor Bolinches Marin on 20/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>

using namespace std;
const int MAX = 5;

void showExample09(){
    int nums[MAX] = {11,22,33,44,55};
    int *p[MAX];
    
    for(register int i = 0; i< MAX ; i++ ){
        cout << "p["<< i << "]= &nums["<<i<<"]"<<endl;
        p[i] = &nums[i];
    }
    
    for(register int i = 0; i< MAX ; i++ ){
        cout << "*p["<< i << "]= "<< *p[i]<<endl;
    }
}

int main(int argc, const char * argv[]) {
    showExample09();
    return 0;
}
