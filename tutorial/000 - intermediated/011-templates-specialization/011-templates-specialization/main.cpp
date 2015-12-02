//
//  main.cpp
//  010 - Templates
//
//  Created by Victor Bolinches Marin on 27/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//Class Template vs Template Class

/*There is a delicate but significant distinction between class template and template class:

Class template is a template used to generate template classes.
Template class is an instance of a class template.
*/


#include "Pair.hpp"
#include <iostream>
using namespace std;


void pair_Int_Int(){
    Pair<int,int> *pair = new Pair<int,int>(100, 75);
    cout << "Pair < "<< pair->component1() << " , " << pair->component2() <<" >" << endl;
}

void pair_int_string(){
    Pair<int,string> *pair2 = new Pair<int,string>(100, "Victor Bolinches");
    cout << "Pair < "<< pair2->component1() << " , " << pair2->component2() <<" >" << endl;
}

void pair_string_int(){
    Pair<string,int> *pair3 = new Pair<string,int>("Hola Mundo", 75);
    cout << "Pair < "<< pair3->component1() << " , " << pair3->component2() <<" >" << endl;
}

void pair_double_float(){
    Pair<double,float> *pair4 = new Pair<double,float>(99.9992213, 7550043);
    cout << "Pair < "<< pair4->component1() << " , " << pair4->component2() <<" >" << endl;
}

void showExample010(){
    pair_Int_Int();
    pair_int_string();
    pair_string_int();
    pair_double_float();
}

int main (int argc, const char * argv[]) {
    showExample010();
    return 0;
}