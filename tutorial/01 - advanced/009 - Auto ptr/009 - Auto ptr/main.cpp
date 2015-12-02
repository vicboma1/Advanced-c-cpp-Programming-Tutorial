//
//  main.cpp
//  009 - Auto ptr
//
//  Created by Victor Bolinches Marin on 01/12/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

void dynamicMemory(){
    vector<int> *v = new vector<int>();
    v->push_back(1);
    v->push_back(22);
    v->push_back(333);
    
    for(auto&& i : *v){
        cout<< i << endl;
    }
    
    delete v;
}

void Auto_PTR(){
    auto_ptr<vector<int>> v(new vector<int>());
    
    v->push_back(123);
    v->push_back(6213);
    v->push_back(7784);
    
    for(auto&& i : *v){
        cout<< i << endl;
    }
    
    
}

void showExample009(){
    dynamicMemory();
    Auto_PTR();
}

int main(int argc, const char * argv[]) {
    showExample009();
    return 0;
}
