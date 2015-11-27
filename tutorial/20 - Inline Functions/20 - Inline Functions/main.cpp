//
//  main.cpp
//  20 - Inline Functions
//
//  Created by Victor Bolinches Marin on 24/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>
using namespace std;

inline double cubo(double x){
    return x * x * x;
}

void showExample20(){
    double resutl = cubo(10);
    cout << resutl << endl;
}

int main(int argc, const char * argv[]) {
        showExample20();
    return 0;
}
