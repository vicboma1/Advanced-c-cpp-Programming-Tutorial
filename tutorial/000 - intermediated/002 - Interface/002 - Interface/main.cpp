//
//  main.cpp
//  002 - Interface
//
//  Created by Victor Bolinches Marin on 23/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>
using namespace std;

//Interface
class IDemo
{
public:
    virtual ~IDemo() {}
    virtual void OverrideMe() = 0;
};

class Child : public IDemo
{
    public:
    
        virtual void OverrideMe()
        {
            cout<< "I am a child and I override IDemo method" <<endl;
        }
};

void example1(){
    Child child;
    child.OverrideMe();
}

void example2(){
    Child child;
    IDemo* demo = &child;
    demo->OverrideMe();
    
}

void showExample002(){
    example1();
    example2();
    
}

int main(int argc, const char * argv[]) {
    showExample002();
    return 0;
}
