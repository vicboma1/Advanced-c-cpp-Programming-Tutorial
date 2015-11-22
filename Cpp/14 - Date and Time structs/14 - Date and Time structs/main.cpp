//
//  main.cpp
//  14 - Date and Time structs
//
//  Created by Victor Bolinches Marin on 22/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

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
    
    cout << "Año: "<< 1900 + clockLocal->tm_year << endl;
    cout << "Mes: "<< 1 + clockLocal->tm_mon<< endl;
    cout << "Dia: "<<  clockLocal->tm_mday << endl;
    cout << "Hora: "<< 1 + clockLocal->tm_hour << ":" << 1 + clockLocal->tm_min << ":" << 1 + clockLocal->tm_sec << endl;
    
}

int main(int argc, const char * argv[]) {
    showExample14();
    return 0;
}
