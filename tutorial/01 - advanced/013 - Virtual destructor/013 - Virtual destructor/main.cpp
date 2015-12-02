//
//  main.cpp
//  013 - Virtual destructor
//
//  Created by Victor Bolinches Marin on 02/12/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>
using namespace std;

class Base
{
    
public:
    Base(){
        cout << "Constructing Base" << endl;
    }
    
    ~Base(){
        cout << "Destroying Base" << endl;
    }
};

class BaseVirtual
{
    
public:
    BaseVirtual(){
        cout << "Constructing BaseVirtual" << endl;
    }
    
   virtual ~BaseVirtual(){
        cout << "Destroying BaseVirtual" << endl;
    }
};


class Derive: public Base, public BaseVirtual
{
    
public:
    Derive(){
        cout <<  "Constructing Derive"<< endl;
    }
    
    ~Derive(){
        cout << "Destroying Derive"<< endl;
    }
};


void showExample013(){
    Base *basePtr = new Derive();
    delete basePtr;
    
    cout<< endl;

    BaseVirtual *BaseVirtualPtr = new Derive();
    delete BaseVirtualPtr;
    
    cout<< endl;
    
    auto_ptr<BaseVirtual> auto_BaseVirtualPtr(new Derive());
    
}

int main(int argc, const char * argv[]) {
    showExample013();
    return 0;
}
