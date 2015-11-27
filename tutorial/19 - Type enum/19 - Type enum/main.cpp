//
//  main.cpp
//  19 - Type enum
//
//  Created by Victor Bolinches Marin on 24/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>
using namespace std;

enum Foo { Head, Two, Three, Last };
enum FooNumeric { HeadNum = 100 , TwoNum = 3, ThreeNum = -22, LastNum = 0 };

void showExample19(){
    
    for ( int fooInt = Head; fooInt != Last; fooInt++ )
    {
        Foo foo = static_cast<Foo>(fooInt);
        cout << "Enum: " << fooInt << " - " << foo << endl;
    }
}

int main(int argc, const char * argv[]) {
    showExample19();
    return 0;
}
