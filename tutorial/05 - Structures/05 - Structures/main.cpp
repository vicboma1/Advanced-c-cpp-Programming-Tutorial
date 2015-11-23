//
//  main.cpp
//  05 - Structures
//
//  Created by Victor Bolinches Marin on 19/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>      // std::stringstream, std::stringbuf

using namespace std;


struct basicStruct {
    string name;
    int id_number;
    int age;
    float salary;
    string toString() {
        stringstream stream;
        stream << "name: " << this->name << " id: " << this->id_number << " age: " << this->age << " salary: "<< this->salary << endl;
        return stream.str();
    }
};


basicStruct basicStructure(basicStruct _struct){
    _struct.name = "Victor Bolinches";
    _struct.id_number = 1;
    _struct.age = 29;
    _struct.salary = 400000;
    return _struct;
}

/** (*_struct).name is same as _struct->name **/
basicStruct* basicStructurePointer(basicStruct* _struct){
    (*_struct).name = "Victor Bolinches Pointer";
    _struct->id_number = 1232;
    (*_struct).age = 29;
    _struct->salary = 500000;
    return _struct;
}

void showExample05(){
    basicStruct person;
    basicStruct res = basicStructure(person);
    cout << res.toString() << endl;
    
    basicStruct *personPointer;
    personPointer = &person;
    basicStruct* resPointer = basicStructurePointer(personPointer);
    cout << resPointer->toString() << endl;
}

int main(int argc, const char * argv[]) {
    showExample05();
    return 0;
}
