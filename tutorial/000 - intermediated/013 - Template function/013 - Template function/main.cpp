//
//  main.cpp
//  013 - Template function
//
//  Created by Victor Bolinches Marin on 29/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>
#include "Casteable.hpp"
#include <sstream>

using namespace std;

void showExample(){
    Casteable<double> *casting = new Casteable<double>();
    double cast = casting->add<double>(1.0 , 3.0);
    std::cout << "Casting '1 + 3' to " << cast << std::endl;
}

int main(int argc, const char * argv[]) {
    showExample();
    return 0;
}
