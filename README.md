# Advanced C/C++ Programming Tutorial with Xcode (WIP)

##Indexes

###Basics
* [Hello World](https://github.com/vicboma1/Advanced-c-cpp-Programming-Tutorial#hello-world)
* [Contanst/Literals](https://github.com/vicboma1/Advanced-c-cpp-Programming-Tutorial#contanstliterals)
* [Conditionals](https://github.com/vicboma1/Advanced-c-cpp-Programming-Tutorial#conditionals)
* [Loops](https://github.com/vicboma1/Advanced-c-cpp-Programming-Tutorial#loops)
* [Switch](https://github.com/vicboma1/Advanced-c-cpp-Programming-Tutorial#switch)
* [Pointers](https://github.com/vicboma1/Advanced-c-cpp-Programming-Tutorial#pointers)
* [Storages](https://github.com/vicboma1/Advanced-c-cpp-Programming-Tutorial#storages)
* [Struct](https://github.com/vicboma1/Advanced-c-cpp-Programming-Tutorial#struct)
* [Arrays](https://github.com/vicboma1/Advanced-c-cpp-Programming-Tutorial#arrays)
* [Pointer vs Arrays](https://github.com/vicboma1/Advanced-c-cpp-Programming-Tutorial#pointer-vs-arrays)
* [Array of Pointers](https://github.com/vicboma1/Advanced-c-cpp-Programming-Tutorial#array-of-pointers)
* [Pointer to Pointer (Multiple Indirection)](https://github.com/vicboma1/Advanced-c-cpp-Programming-Tutorial#pointer-to-pointer-multiple-indirection)
* [References vs Points](https://github.com/vicboma1/Advanced-c-cpp-Programming-Tutorial#references-vs-points)
* [References](https://github.com/vicboma1/Advanced-c-cpp-Programming-Tutorial#references)
* [Returning values by reference](https://github.com/vicboma1/Advanced-c-cpp-Programming-Tutorial#returning-values-by-reference)
* [Date and Time Structs](https://github.com/vicboma1/Advanced-c-cpp-Programming-Tutorial#date-and-time-structs)
* [File Input/Output](https://github.com/vicboma1/Advanced-c-cpp-Programming-Tutorial#file-inputoutput)
* [Typecasting](https://github.com/vicboma1/Advanced-c-cpp-Programming-Tutorial#file-typecasting)

### Advanced
* [Binary File](https://github.com/vicboma1/Advanced-c-cpp-Programming-Tutorial#binary-file)


# Basics

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

##Contanst/Literals
Chars
```
Escape sequence	Meaning
\\ =	\ character
\' =	' character
\" =	" character
\? =	? character
\a =	Alert or bell
\b =	Backspace
\f =	Form feed
\n =	Newline
\r =	Carriage return
\t =	Horizontal tab
\v =	Vertical tab
\ooo =	Octal number of one to three digits
\xhh =	Hexadecimal number of one or more digits
```
Integer
```
212        // Legal
215u       // Legal
0xFeeL     // Legal
078        // Illegal: 8 is not an octal digit
032UU      // Illegal: cannot repeat a suffix
1223       // decimal
0213       // octal
0x4b       // hexadecimal
40         // int
10u        // unsigned int
10l        // long
20ul       // unsigned long
```
Floating-point
```
3.14159       // Legal
314159E-5L    // Legal
510E          // Illegal: incomplete exponent
210f          // Illegal: no decimal or exponent
.e55          // Illegal: missing integer or fraction
```
Constants
```
#define LENGTH 10
const int  LENGTH = 10;
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

## Storages
Extern Modulo
```cpp
#include "modulo.hpp"

extern int x;

int funcion(){
       return x;
   }
```
Head Modulo
```hpp
#ifndef modulo_hpp
#define modulo_hpp

#include <stdio.h>
int funcion();
#endif /* modulo_hpp */
```

```cpp
#include <iostream>
#include "modulo.hpp"
using namespace std;

/**
 * Variable que se crea en la ejecución de un ámbito temporal.
 * Destroy automático.
 * [auto] <tipo> <nombre_variable>;
 */
void _auto(){
       auto int month = 0;
       cout << "auto int month " << month << endl <<endl;
   }

/**
 * Indica al compilador una preferencia para que el objeto se almacene en un registro de la CPU, si es posible,
 * con el fin de optimizar su acceso, consiguiendo una mayor velocidad de ejecución.
 * static <tipo> <nombre_variable>;
 * static <tipo> <nombre_de_función>(<lista_parámetros>);
 */
void _register(register int *x){
       register char a = 'a';

       for(register int i=0; i < 10; i++) {
              cout << *x++ << " " << a++ << endl;
          }
       cout <<endl;
   }

int incremento() {
       static int x=10;
           x++;
       return x;
   }

/**
 * Asigna una dirección de memoria fija para el	objeto mientras el programa se esté ejecutando
 * No reside en memoria.
 * register <tipo> <nombre_variable>;
 */
void _static(){
      static int x=10;
      for(int i = 0; i < 10; i++){
               cout << i+1 << " : " << incremento() << endl;
           }
      cout<<endl;
  }

/**
 * Se usa para indicar que el almacenamiento y valor de una variable o la definición de una función están
 * definidos en otro módulo o fichero fuente.
 * extern <tipo> <nombre_variable>;
 * [extern] <tipo> <nombre_de_función>(<lista_parámetros>);
 */
int x = 100;
extern int funcion();
void _extern(){
       cout << funcion() << endl;
   }

/**
 * Sirve para que determinados miembros de un objeto de una estructura
 * o clase declarado como constante, puedan ser modificados.
 * class/struct <identificador_clase> { mutable <tipo> <nombre_variable>; }
 */
struct st {
       int y;
      mutable int x;
   };
void _mutable(){
       cout << "struct st { \nint y; \nmutable int x; \n};" << endl;
       const st A = {1, 2};
       cout << "x: "<< A.x << "y: " << A.y << endl;
       A.x = 0;
       cout << "A.x = 0; { x: "<< A.x << " y: " << A.y << " }" << endl;
   }

void showExample000(){
       _auto();
       int s[10] = {1, 2, 1, 5, 2, 7, 3, 1, 3, 0};
       _register(s);
       _static();
       _extern();
       _mutable();
   }

int main(int argc, const char * argv[]) {
       showExample000();
       return 0;
   }
```

Result
```
auto int month 0

1 a
2 b
1 c
5 d
2 e
7 f
3 g
1 h
3 i
0 j

1 : 11
2 : 12
3 : 13
4 : 14
5 : 15
6 : 16
7 : 17
8 : 18
9 : 19
10 : 20

100

struct st {
   int y;
   mutable int x;
   };

x: 2 y: 1
A.x = 0;
x: 0 y: 1
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


## Arrays
```cpp
#include <iostream>
using namespace std;
const int MAX = 3;

void intArrayPointer(){
       int  var[MAX] = {99, 100, 20};
       int *ptr[MAX];

       for(int i = 0; i < MAX; i++)
       {
               ptr[i] = &var[i]; // assign the address of integer.
               cout << "Value of var[" << i << "] = ";
               cout << *ptr[i] << endl;
           }
      cout << endl;
  }

void charArrayPointer(){
       //Equivalent, but does not allow "char* _names[MAX] ..." in c++11·
       char* _names[MAX] = { "Victor", "Manuel", "Bolinches"};
       string names[MAX] = { "Victor", "Manuel","Bolinches"};

       for (int i = 0; i < MAX; i++)
       {
           cout << "Value of names[" << i << "] = ";
           cout << _names[i] << " "<< names[i] << endl;
       }

       cout << endl;
   }

void pointerToArray(){
       double sizes[3] = { 2.45, 23.4, 33.3 };
       double* p;

       p = sizes;
       cout << "Array values using pointer" << endl;
       for(int i= 0;i < 3 ; i++){
               cout << "*(p + " << i << ") : ";
               cout << *(p+i)<<endl;
        }
       cout << "Array values using balance as address " << endl;
       for ( int i = 0; i < 3; i++ )
       {
               cout << "*(size + " << i << ") : ";
               cout << *(sizes + i) << endl;
       }

   }

void showExample06(){
       intArrayPointer();
       charArrayPointer();
       pointerToArray();
   }

int main(int argc, const char * argv[]) {
       showExample06();
       return 0;
   }
```

Result
```
Value of var[0] = 99
Value of var[1] = 100
Value of var[2] = 20

Value of names[0] = Victor Victor
Value of names[1] = Manuel Manuel
Value of names[2] = Bolinches Bolinches

Array values using pointer
*(p + 0) : 2.45
*(p + 1) : 23.4
*(p + 2) : 33.3

Array values using balance as address
*(size + 0) : 2.45
*(size + 1) : 23.4
*(size + 2) : 33.3
```

## Pointer vs Arrays
```cpp
#include <iostream>

using namespace std;

const int SIZE = 3;

void showExample08(){
       int  array[SIZE] = {111, 222, 333};
       for (register int i = 0; i < SIZE; i++)
       {
           cout << "Value of array[" << i << "] = ";
           cout << *array << endl;
           //set values - An array name generates a pointer constant
           *array = i;    // This is a correct syntax
           //array++;        This is incorrect.
       }
   }

int main (int argc, const char * argv[])
{
    showExample08();
    return 0;
}
```

Result
```
Value of array[0] = 111
Value of array[1] = 0
Value of array[2] = 1

** Internal Array values
Value of array[0] = 111
Value of array[1] = 222
Value of array[2] = 333
i = 0
Value of array[0] = 0
Value of array[1] = 222
Value of array[2] = 333
i = 1
Value of array[0] = 1
Value of array[1] = 222
Value of array[2] = 333
i = 2
Value of array[0] = 2
Value of array[1] = 222
Value of array[2] = 333
```

## Array of Pointers
```cpp
#include <iostream>

using namespace std;
const int MAX = 5;

void showExample09(){
       int nums[MAX] = {11,22,33,44,55};
       int *p[MAX];

       for(register int i = 0; i< MAX ; i++ ){
        cout << "p["<< i << "]= &nums["<<i<<"]"<<endl;
        p[i] = &nums[i];
    }

       for(register int i = 0; i< MAX ; i++ ){
              cout << "*p["<< i << "]= "<< *p[i]<<endl;
          }
   }

int main(int argc, const char * argv[]) {
      showExample09();
      return 0;
  }
```

Result
```
p[0]= &nums[0]
p[1]= &nums[1]
p[2]= &nums[2]
p[3]= &nums[3]
p[4]= &nums[4]

*p[0]= 11
*p[1]= 22
*p[2]= 33
*p[3]= 44
*p[4]= 55
```

## Pointer to Pointer (Multiple Indirection)
```cpp
#include <iostream>

using namespace std;

void showExample10(){
       int factor;
       int *p;
       int **pp;

       factor = 100;

       p = &factor;
       pp = &p;

       cout << "Value of factor :" << factor << endl;
       cout << "Value available at *p :" << *p << endl;
       cout << "Value available at **pp :" << **pp << endl <<endl;

       factor = 200;
       cout << "factor = " << factor << endl;
       cout << "Value available at *p :" << *p << endl;
       cout << "Value available at **pp :" << **pp << endl<<endl;

       *p = 300;
       cout << "*p = " << *p << endl;
       cout << "Value of factor :" << factor << endl;
       cout << "Value available at **pp :" << **pp << endl<<endl;

       **pp = 44;
       cout << "**pp  = " << **pp << endl;
       cout << "Value of factor :" << factor << endl;
       cout << "Value available at *p :" << *p << endl;
   }
```

Result
```
Value of factor :100
Value available at *p :100
Value available at **pp :100

factor = 200
Value available at *p :200
Value available at **pp :200

*p = 300
Value of factor :300
Value available at **pp :300

**pp  = 44
Value of factor :44
Value available at *p :44
```

## References vs Points
```
Las referencias son frecuentemente confundidas con los punteros.
 Hay tres diferencias:
    1: Las referencias nunca pueden ser NULL.
    2: Una referencias inicializada en un objeto no puede ser referenciada a otro objeto.
    3: Una referencia debe de ser inicializada cuando se crea el objeto.
```

## References
```cpp
#include <iostream>
#include <sstream>

using namespace std;

void variablesAndReferences(){

    int fooInt;
    double fooDouble;
    
    int &fooRefInt = fooInt;
    double &fooRefDouble = fooDouble;
    
    fooInt = 100;
    fooDouble = 777.7;
    
    cout << "Value fooInt : " << fooInt << endl;
    cout << "Value fooRefInt : " << fooRefInt  << endl;
   
    cout << "fooDouble : " << fooDouble << endl;
    cout << "fooRefDouble : " << fooRefDouble  << endl;
}

void showExample11(){
    variablesAndReferences();
}

int main(int argc, const char * argv[]) {
    showExample11();
    return 0;
}
```

Result
```
Value fooInt : 100
Value fooRefInt : 100
fooDouble : 777.7
fooRefDouble : 777.7
```

## Parameter by References
```cpp
#include <iostream>
#include <sstream>

using namespace std;

void swap(string& str1, string& str2);
void swap(int& x, int& y);

void exampleString(){
    string hello = "World !!!!";
    string world = "Hello";
    
    cout << hello <<" "<< world <<endl;
    
    swap(hello, world);
    
    cout << hello <<" "<< world <<endl;
}

void exampleInt(){
    int x = 100;
    int y = 200;
    
    cout << "Value x: "<< x <<" Value y: "<< y <<endl;
    
    swap(x, y);
    
    cout << "Value x: "<< x <<" Value y: "<< y <<endl;
}

void exampleIntPointer(){
    int _x = 300;
    int _y = 400;
    int* x = &_x;
    int* y = &_y;
    
    cout << "Value x: "<< *x <<" Value y: "<< *y <<endl;
    
    swap(*x, *y);
    
    cout << "Value x: "<< *x <<" Value y: "<< *y <<endl;
}


void showExample12(){
    exampleString();
    exampleInt();
    exampleIntPointer();
}

void swap(string& str1, string& str2){
    string tmp;
    tmp = str1;
    str1 = str2;
    str2 = tmp;
    
    return ;
}

void swap(int& str1, int& str2){
    int tmp;
    tmp = str1;
    str1 = str2;
    str2 = tmp;
    
    return ;
}

int main(int argc, const char * argv[]) {
    showExample12();
    return 0;
}

```

Result
```
World !!!! Hello
Hello World !!!!
Value x: 100 Value y: 200
Value x: 200 Value y: 100
Value *x: 300 Value *y: 400
Value *x: 400 Value *y: 300
```

## Returning values by reference
```cpp
#include <iostream>
using namespace std;

int& set(int obj [], int i )
{
    return obj[i];
}

void showExample13(){
    
    int arrayInt [] = {0,1,2,3,4,5};
    
    int size = 6;
    for (int i = 0; i< size; i++) {
        cout << "arrayInt[" << i << "] = ";
        cout << arrayInt[i] << endl;
    }
    
    cout <<""<< endl;
    cout <<"set(arrayInt,0) = 999;"<< endl;
    cout <<"set(arrayInt,1) = 444;"<< endl;
    cout <<""<< endl;
    
    set(arrayInt,0) = 999;
    set(arrayInt,1) = 444;
    
    for (int i = 0; i< size; i++) {
        cout << "arrayInt[" << i << "] = ";
        cout << arrayInt[i] << endl;
    }
    
}

int main(int argc, const char * argv[]) {
    showExample13();
    return 0;
}
```

Result
```
arrayInt[0] = 0
arrayInt[1] = 1
arrayInt[2] = 2
arrayInt[3] = 3
arrayInt[4] = 4
arrayInt[5] = 5

set(arrayInt,0) = 999;
set(arrayInt,1) = 444;

arrayInt[0] = 999
arrayInt[1] = 444
arrayInt[2] = 2
arrayInt[3] = 3
arrayInt[4] = 4
arrayInt[5] = 5
```

## Date and Time Structs
```cpp
#include <iostream>
#include <ctime>

using namespace std;

/** 
  ctime
 
struct tm {
 int tm_sec;  int tm_mday;  int tm_wday;
 int tm_min;  int tm_mon;   int tm_yday;
 int tm_hour; int tm_year;  int tm_isdst;
 };  
 */

void showExample14(){
    time_t clock = time(0);
    char* _date = ctime(&clock);
    tm* clockLocal = localtime(&clock);
    
    cout << _date << endl;
    
    cout << "Year: "<< 1900 + clockLocal->tm_year << endl;
    cout << "Month: "<< 1 + clockLocal->tm_mon<< endl;
    cout << "Day: "<<  clockLocal->tm_mday << endl;
    cout << "Time: "<< 1 + clockLocal->tm_hour << ":";
    cout << 1 + clockLocal->tm_min << ":";
    cout << 1 + clockLocal->tm_sec << endl;
    
}

int main(int argc, const char * argv[]) {
    showExample14();
    return 0;
}

```

Result
```
Sun Nov 22 20:12:53 2015

Year: 2015
Month: 11
Day: 22
Time: 21:13:54
```

## File Input/Output
```cpp
#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;


void readFile(){
    string line;
    ifstream file_r("File.txt");
    bool isOpen = file_r.is_open();
    if (!isOpen)
    {
        cout << "Error file : Unable to open";
        return ;
    }
    
    while (getline (file_r,line) )
    {
        cout << line << '\n';
    }
    file_r.close();
}

void writeFile(){
    ofstream file_w("File.txt", ios::app);
    bool isOpen = file_w.is_open();
    if (!isOpen)
    {
        cout << "Error file : Unable to open";
        return ;
    }

    file_w << "\n\n";
    file_w << "Victor Bolinches Marin";
    file_w.close();
}

void showExample15(){
    readFile();
    writeFile();
    readFile();
}

int main(int argc, const char * argv[]) {
    showExample15();
    return 0;
}

```

Result
```
"Neque porro quisquam est qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit ...

"Neque porro quisquam est qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit ...


Victor Bolinches Marin

```

## Typecasting
```cpp
void cast(){
    for ( int x = 65; x <= 90; x++ ) {
        cout<< x <<" - "<< (char)x <<"   ";
    }
}

void staticCast(){
    for ( int x = 97; x <= 122; x++ ) {
        cout<< x <<" - "<< static_cast<char>(x) <<"   ";
    }
    
}
void showExample(){
    cast();
    staticCast();
}


int main(int argc, const char * argv[]) {
    showExample();
    return 0;
}
```

Result
```
Cast
65 - A   66 - B   67 - C   68 - D   69 - E   70 - F   71 - G   72 - H   73 - I   74 - J   75 - K   76 - L   77 - M   78 - N 79 - O   80 - P   81 - Q   82 - R   83 - S   84 - T   85 - U   86 - V   87 - W   88 - X   89 - Y   90 - Z  

static_cast<T>
97 - a   98 - b   99 - c   100 - d   101 - e   102 - f   103 - g   104 - h   105 - i   106 - j   107 - k   108 - l   109 -m 110 - n  111 - o  112 - p  113 - q   114 - r   115 - s   116 - t   117 - u   118 - v   119 - w   120 - x   121 - y  122 - z


```

##
```cpp
```

Result
```
```

##
```cpp
```

Result
```
```

##
```cpp
```

Result
```
```

##
```cpp
```

Result
```
```

#Advanced

## Binary File
```cpp
#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

void showExample000(){
    streampos size;
    char* memblock;
    
    ifstream file("File.bin", ios::in | ios::binary | ios::ate);
    if (!file.is_open()){
        cout << "Unable to open file";
        return ;
    }
    
    size = file.tellg();
    memblock = new char [size];
    file.seekg (0, ios::beg);
    file.read (memblock, size);
    file.close();
    
    cout << "the entire file content is in memory";
    cout << memblock <<endl;
    cout << "delete[] memblock;" << endl << endl;
    delete[] memblock;
}

int main(int argc, const char * argv[]) {
    showExample000();
    return 0;
}
```

Result
```
"Neque porro quisquam est qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit ...

"Neque porro quisquam est qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit ...


Victor Bolinches Marin
delete[] memblock;

```


# Referencias : 
* Basics File I/O, http://compsci.hunter.cuny.edu/~sweiss/resources/fileIO.pdf
* 
