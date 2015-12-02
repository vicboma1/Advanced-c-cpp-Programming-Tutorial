//
//  main.cpp
//  011 - Multiple Inheritance
//
//  Created by Victor Bolinches Marin on 02/12/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>

class A {
    public :
    virtual void f();
};

class B {
    public:
    virtual void f();
};

class C : public A ,public B {
    public :
    void f(){}
};

void showExample011(){
    C *pc = new C;
    pc->f();
    pc->A::f();
    pc->B::f();
    
    A* pa = pc;
    pc->f();

}

int main(int argc, const char * argv[]) {
    showExample011();
    return 0;
}
