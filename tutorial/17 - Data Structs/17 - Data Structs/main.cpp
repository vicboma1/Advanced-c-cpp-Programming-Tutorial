//
//  main.cpp
//  18 - Data Structs
//
//  Created by Victor Bolinches Marin on 23/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>
#include <sstream>

using namespace std;

struct Client set(string name,string surname,string city, string phone, int _id);

struct Client
{
    char  name[50];
    char  surname[50];
    char  city[100];
    char  phone[9];
    int   id;
};

struct Client set(string name,string surname,string city, string phone, int _id){
    struct Client client;
    
    strcpy(client.name,name.c_str());
    strcpy(client.surname, surname.c_str());
    strcpy(client.city, city.c_str());
    strcpy(client.phone, phone.c_str());
    client.id = _id;
    
    return client;
}

void toString(struct Client cliente){
    
    cout << "Client name : " << cliente.name <<endl;
    cout << "Client surname : " << cliente.surname <<endl;
    cout << "Client city : " << cliente.city <<endl;
    cout << "Client phone : " << cliente.phone <<endl;
    cout << "Client id : " << cliente.id << endl << endl;
}

void showExample(){
    struct Client c1 = set("Victor","Bolinches","Madrid","567654321",0);
    struct Client c2 = set("Manuel","Lopez","Madrid","098654321",1);
    
    toString(c1);
    toString(c2);
}

int main(int argc, const char * argv[]) {
    showExample();
    return 0;
}
