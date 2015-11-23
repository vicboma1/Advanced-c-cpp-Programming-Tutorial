//
//  main.cpp
//  18 - Data Struct Pointer
//
//  Created by Victor Bolinches Marin on 23/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>
#include <sstream>

using namespace std;


typedef struct Client
{
    char  name[50];
    char  surname[50];
    char  city[100];
    char  phone[9];
    int   id;
    
} Client;

void toString(Client* cliente);
static Client& set(string name,string surname,string city, string phone, int _id);


static Client& set(string name,string surname,string city, string phone, int _id){
    static Client client;
    strcpy(client.name,name.c_str());
    strcpy(client.surname, surname.c_str());
    strcpy(client.city, city.c_str());
    strcpy(client.phone, phone.c_str());
    client.id = _id;
    
    return client;
}

void toString(struct Client* cliente){
    
    cout << "Client name : " << cliente->name <<endl;
    cout << "Client surname : " << cliente->surname <<endl;
    cout << "Client city : " << cliente->city <<endl;
    cout << "Client phone : " << cliente->phone <<endl;
    cout << "Client id : " << cliente->id << endl << endl;
}

void showExample(){
    Client c1 = set("Victor","Bolinches","Madrid","567654321",0);
    Client c2 = set("Manuel","Lopez","Barcelona","098654321",1);
    
    Client* p1 = &c1;  //toString(&c1);
    Client* p2 = &c2;  //toString(&c2);
    
    toString(p1);
    toString(p2);
}

int main(int argc, const char * argv[]) {
    showExample();
    return 0;
}

