# Advanced C/C++ Programming Tutorial

##Indexes

###Introduction 
* [Hello World](https://github.com/vicboma1/Advanced-c-cpp-Programming-Tutoria#hello-world)
* [Conditionals](https://github.com/vicboma1/Advanced-c-cpp-Programming-Tutoria#conditionals)
* [Loops](https://github.com/vicboma1/Advanced-c-cpp-Programming-Tutoria#loops)
* [Switch](https://github.com/vicboma1/Advanced-c-cpp-Programming-Tutoria#switch)
* [Pointers](https://github.com/vicboma1/Advanced-c-cpp-Programming-Tutoria#pointers)
* [Struct](https://github.com/vicboma1/Advanced-c-cpp-Programming-Tutoria#struct)

# Introduction

## Hello World
```cpp
#include <stdio.h>
#include <iostream>
using namespace std;

void showExample00(){
    int number;
    cout << "Hello World" << endl;
    cout << "Please enter a number: " << endl;
    cin >> number;
    cin.ignore();
    cout << "You entered: "<< number << endl;
    cin.get(); // wait a press key to finish
}

int main()
{
    showExample00();
    return 0 ;
}

```

Result
```
 Hello World
 Please enter a number:
 12
 You entered: 12
```

## Conditionals
```c
#include <stdio.h>
#include <sstream>
#include <iostream>

using namespace std;

bool isMaxEq(int a, int b){
    return (a >= b);
}

string formalizeString(bool result){
    return (result) ? "Yes" : "No"; // operador ternario [ if(result) "Yes" else "No" ]
}

void showExample01() {
    int num1, num2;
    cout << "Please enter a number: " << endl;
    cin >> num1;
    cin.ignore();
    cout << "Please enter other number: " << endl;
    cin >> num2;
    cin.ignore();
    cout << "is " << num1 << " Max or Eq Than " << num2 << " ?" << endl;
    bool res = isMaxEq(num1, num2);
    string str = formalizeString(res);
    cout << "Result: "<< str << endl;
    cin.get();
}

int main()
{
    showExample01();
    return 0 ;
}
```

Result
```
 Please enter a number:
 32
 Please enter other number:
 3
 is 32 Max or Eq Than 3 ?
 Result: Yes
```

## Loops
```cpp
#include <iostream>
using namespace std;

void showExampleFor(){
    for ( int x = 0; x < 5; x++ ) {
        cout<< "For "<< x <<endl;
    }
    cin.get();
}

void showExampleWhile(){
    int x = 0;
    while ( x < 5 ) {
        cout<< "While " << x << endl;
        x++;
    }
    cin.get();
}

void showExampleDoWhile(){
    int x = 0;
    do {
        cout<< "Do/While " << x << endl;
        x++;
        
    } while ( x < 5 );
    cin.get();
}

int main(int argc, const char * argv[]) {
   
    showExampleFor();
    showExampleWhile();
    showExampleDoWhile();
    
    return 0;
}

```

Result
```
For 0
For 1
For 2
For 3
For 4
 
While 0
While 1
While 2
While 3
While 4
 
Do/While 0
Do/While 1
Do/While 2 
Do/While 3
Do/While 4
```

## Switch
```c
#include <iostream>

using namespace std;

int module2(int num){
    int mod = num % 2;
    switch ( mod ) {
        case 0:
            return 0;
            break;
        case 1:
            return 1;
            break;
        default:
            return -1;
            break;
    }
}


void play()
{
    cout << "Play called" << endl;
}
void save()
{
    cout << "Save called" << endl;
}
void load()
{
    cout << "Load called" << endl;
}
void exit()
{
    cout << "Exit called" << endl;
}

void menu()
{
    int input;
    cout << "1. Play" << endl;
    cout << "2. Save" << endl;
    cout << "3. Load" << endl;
    cout << "4. Exit" << endl;
    cout << "Option: ";
    cin>> input;
    switch (input) {
        case 1: play(); break;
        case 2: save(); break;
        case 3: load(); break;
        case 4: exit(); break;
        default: cout<<"Error, Bad input"<< endl; break;
    }
    cin.get();
}

void showExample03(){
    cout<< "10 mod 2 = " << module2(10) << endl;
    cout<< "11 mod 2 = " << module2(11) << endl<<endl;
    
    menu();
}

int main(int argc, const char * argv[]) {
    showExample03();
    return 0;
}
```

Result
```
10 mod 2 = 0
11 mod 2 = 1

1. Play
2. Save
3. Load
4. Exit
Option: 2
Save called
```

## Pointers
```c
#include <iostream>

using namespace std;

void pointer() {
    
    int x;
    int* p;
    
    p = &x;
    cout << " int *p = &x " << endl;
    cout << " Please enter a number x = " << endl;
    cin >> x;
    cin.ignore();
    
    cout << "Value x = "<< x << endl;
    cout << "Address &x = "<< &x << endl;
    cout << "Pointer *p = "<< *p << endl;
    cout << "Set *p = "<< *p << endl;
    cin >> *p;
    cin.ignore();
    
    cout << "Value x = "<< x << endl;
    cout << "Address &x = "<< &x << endl;
    cout << "Pointer *p = "<< *p << endl;
    cout << "Set *p = "<< *p << endl;

    cin.get();
}

void pointerFromFreeMemory(){
    
    int* ptr = new int;
    cout << " int* ptr = new int" << endl;
    cout << " Please enter a number *ptr =  " << endl;
    cin >> *ptr;
    cin.ignore();
    
    cout << "Address &prt = "<< &ptr << endl;
    cout << "Pointer *ptr = "<< *ptr << endl;
    
    cin.get();
    
    delete ptr;
    
    cout << "Delete ptr"<< endl;
}

void showExample04(){
    pointer();
    pointerFromFreeMemory();
}


int main(int argc, const char * argv[]) {
    showExample04();
    return 0;
}
```

Result
```
int *p = &x 
Please enter a number x =  22
Value x = 22
Address &x = 0x7fff5fbff6dc
Pointer *p = 22

Set *p = 12222
Value x = 12222
Address &x = 0x7fff5fbff6dc
Pointer *p = 12222
Set *p = 12222

int* ptr = new int
Please enter a number *ptr =  322
Address &prt = 0x7fff5fbff6c8
Pointer *ptr = 322

Delete ptr
```

## Struct
```cpp
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
        stream << "name: " << this->name << " id: " << this->id_number 
              << " age: " << this->age << " salary: "<< this->salary << endl;
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

```

Result
```
name: Victor Bolinches id: 1 age: 29 salary: 400000
name: Victor Bolinches Pointer id: 1232 age: 29 salary: 500000
```

## 
```cpp
```

Result
```

```
