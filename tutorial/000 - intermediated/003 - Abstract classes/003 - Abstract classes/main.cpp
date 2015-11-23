//
//  main.cpp
//  003 - Abstract classes
//
//  Created by Victor Bolinches Marin on 24/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>

using namespace std;

class Abstract {
public:
    Abstract();
    virtual void f() = 0; // pure virtual
    virtual ~Abstract();
};

class Concrete : public Abstract {
public:
    Concrete();
    void f() override {}; // non-pure virtual
    virtual void g();     // non-pure virtual
    virtual ~Concrete();
};


void showExample003(){
    Concrete b;
    Abstract& a = b;
    a.f();
}

int main(int argc, const char * argv[]) {
    showExample003();
    return 0;
}
