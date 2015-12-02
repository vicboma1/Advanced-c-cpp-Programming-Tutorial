//
//  main.cpp
//  008 - Lambdas
//
//  Created by Victor Bolinches Marin on 01/12/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

void functionLambda(){
    vector<int> c { 1,2,3,4,5,6,7 };
    int x = 5;
    c.erase(
            std::remove_if(
                           c.begin(),
                           c.end(),
                           [x](int n) { return n < x; } ),
            c.end()
        );
    
    cout << "c: ";
    
    for (auto i: c) {
        std::cout << i << ' ';
    }
    
    cout << '\n';
    
    function<int (int)> func = [](int i) { return i + 4; };
    cout << "func: " << func(6) << '\n';
}

void functionVoidInline(){
    auto func = [] () { cout << "function Void Inline" << endl; };
    func();
}

void functionIntInline(){
    auto func = [] () -> int { cout << "function Int Inline" << endl << "result: "; return -999; };
    cout  << func()  << endl;
}

void bucles(){
    vector<int> *vec = new vector<int>();
    vec->push_back(123);
    vec->push_back(221);
    vec->push_back(32);
    vec->push_back(1);
    for_each( vec->begin(), vec->end(), [] (int val)
    {
        cout << val << endl;
    });
}

void showExample008(){
    functionVoidInline();
    functionIntInline();
    bucles();
    functionLambda();
}

int main(int argc, const char * argv[]) {
    showExample008();
    return 0;
}
