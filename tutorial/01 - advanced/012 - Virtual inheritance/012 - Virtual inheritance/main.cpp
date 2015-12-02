//
//  main.cpp
//  012 - Virtual inheritance
//
//  Created by Victor Bolinches Marin on 02/12/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Base {
public:
protected:
    int data_;
};

class Child1 : public virtual Base {
    public:
  
};

class Child2 : public virtual Base {
    
    public:
};

class Join : public Child1, public Child2 {
public:
    int method()
    {
        data_ = 1;
        return data_;
    }
};

void showExample012()
{
    Join *j = new Join();
    Base *b = j;
    
    cout << j->method() << endl;
    cout << b << endl;
}

int main(int argc, const char * argv[]) {
    showExample012();
    return 0;
}
