//
//  main.cpp
//  004 - Dynamic Memory
//
//  Created by Victor Bolinches Marin on 24/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>
using namespace std;

class MyClass {
    
public:
    int data[100];
    MyClass() {
        std::cout << "constructed [" << this << "]" <<endl;
    }
};

void showExample004(){
    std::cout << "1: ";
    MyClass * p1 = new MyClass();
    std::cout << "2: ";
    MyClass * p2 = new (std::nothrow) MyClass();
    std::cout << "3: ";
    new (p2) MyClass();
    std::cout << "4: ";
    MyClass * p3 = (MyClass*) ::operator new (sizeof(MyClass));
    
    delete p1;
    delete p2;
    delete p3;
}

int main(int argc, const char * argv[]) {
    showExample004();
    return 0;
}
