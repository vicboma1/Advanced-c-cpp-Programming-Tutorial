//
//  main.cpp
//  014 - Data Structures
//
//  Created by Victor Bolinches Marin on 29/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>



using namespace std;

void _vector(){
    vector<int> *v = new vector<int>();
    
    
    cout<< "Empty " << v->empty() << endl;

    v->push_back(1);
    v->push_back(12222);
    v->push_back(2);
    v->push_back(3);
   
    for(const int &i : *v) // access by const reference
        cout << i << ' ';
    cout << '\n';
    
    cout<< "size " << v->size() << endl;
    
    auto it = v->begin();
    v->erase(it+0);

   
    for(auto i: *v) // access by value, the type of i is int
        cout << i << ' ';
    cout << '\n';
    
    cout<< "size " << v->size() << endl;

    v->insert(it,10);
    
    for(auto&& i: *v) // access by reference, the type of i is int&
        cout << i << ' ';
    cout << '\n';

    cout<< "size " << v->size() << endl;
    
    vector<int>::const_iterator cii;
    for(cii = v->begin(); cii != v->end(); cii++) // access by iterator
    {
        cout << *cii << " ";
    }
     v->pop_back();
     v->pop_back();
     v->pop_back();
    
    cout <<endl;

    cout<< "Size " << v->size() << endl;
    cout<< "Empty " << v->empty() << endl;
    v->clear();
    cout<< "Clear " << endl;
    cout<< "Empty " << v->empty() << endl;
}

void _list(){
    list<int> *_list = new list<int>();
    
    int isEmpty = _list->empty();
    cout<< "Empty " << isEmpty << endl;
    
    if(isEmpty){
      _list->push_back(15);
      _list->push_back(13);
      _list->push_back(81);
      _list->push_back(29);
      _list->push_back(37);
      _list->push_back(84);
      _list->push_back(29);
    }
    
    for(auto&& i: *_list)
        cout << i << ' ';
    cout << '\n';
    
    cout<< "size " << _list->size() << endl;

    _list->sort();
    
    
    for(auto&& i: *_list)
        cout << i << ' ';
    cout << '\n';
    
    cout<< "Size " << _list->size() << endl;
    cout<< "Empty " << _list->empty() << endl;
    _list->clear();
    cout<< "Clear " << endl;
    cout<< "Empty " << _list->empty() << endl;

}


void _stack(){
    stack<string> *_stack = new stack<string>();
    
    int isEmpty = _stack->empty();
    cout<< "Empty " << isEmpty << endl;
    cout<< "Size " << _stack->size() << endl;

    _stack->push("Hola");
    _stack->push("Mundo");
    
    while(!_stack->empty()){
        cout <<  _stack->top() << ' ';
        _stack->pop();
    }
    
    cout << '\n';
    
    _stack->push("Victor");
    _stack->push("Bolinches");
    
    while(!_stack->empty()){
        cout <<  _stack->top() << ' ';
        _stack->pop();
    }
    
    cout << '\n';
    
    cout<< "Size " << _stack->size() << endl;
    
}

void _queue(){
    queue<string> *_queue = new queue<string>();
    
    int isEmpty = _queue->empty();
    cout<< "Empty " << isEmpty << endl;
    cout<< "Size " << _queue->size() << endl;
    
    _queue->push("Hola");
    _queue->push("Mundo");
    
    while(!_queue->empty()){
        cout <<  _queue->front() << ' ';
        _queue->pop();
    }
    
    cout << '\n';
    
    _queue->push("Victor");
    _queue->push("Bolinches");
    
    cout<< "Back " << _queue->back() << endl;
    cout<< "Front " << _queue->front() << endl;
    
    while(!_queue->empty()){
        cout <<  _queue->front() << ' ';
        _queue->pop();
    }
    
    cout << '\n';
    
    cout<< "Size " << _queue->size() << endl;
    
}

void _set(){
    set<string> *_set = new set<string>();
    
    int isEmpty = _set->empty();
    cout<< "Empty " << isEmpty << endl;
    cout<< "Size " << _set->size() << endl;
    
    _set->insert("Hello");
    _set->insert("World");
    _set->insert("Victor");
    _set->insert("Bolinches");
    
    for(auto&& i : *_set)
        cout << i << ' ';
    cout << '\n';

    
    cout<< "Insert Alberto | Hello " << endl;
    _set->insert("Alberto");
    _set->insert("Hello");

    cout<< "Count Hello " << _set->count("Hello") << endl;

    for(auto&& i : *_set)
        cout << i << ' ';
    cout << '\n';
    
    cout<< "Erase " << _set->erase("Alberto") << endl;
    cout<< "Erase " << _set->erase("Bolinches") << endl;
    cout<< "Erase " << _set->erase("Victor") << endl;
    
    for(auto&& i : *_set)
        cout << i << ' ';
    cout << '\n';
}

void _multiset(){
    
    int a[ 10 ] = { 7, 22, 9, 1, 18, 30, 100, 22, 85, 13 };
    int aSize = sizeof(a) / sizeof(int);
    multiset< int, std::less< int > > intMultiset(a, a + aSize);
    
    for ( auto it = intMultiset.begin(); it != intMultiset.end(); ++it)
        cout  << *it << "  ";
    cout << endl << endl;
    
    std::ostream_iterator< int > output( cout, " " );
    
    cout << intMultiset.count( 15 ) << " values of 15 in the multiset\n\n";
    
    intMultiset.insert( 15 );
    intMultiset.insert( 15 );
    
    cout << intMultiset.count( 15 ) << " values of 15 in the multiset\n\n";
    
    for ( auto it = intMultiset.begin(); it != intMultiset.end(); ++it)
        cout << "  " << *it;
    cout << endl << endl;

}

void _map(){
    map<string,int> *_map = new map<string,int>();
    
    int isEmpty = _map->empty();
    cout<< "Empty " << isEmpty << endl;
    cout<< "Size " << _map->size() << endl;
    
    _map->insert(pair<string,int>("Hello",100));
    _map->insert(pair<string,int>("World",11));
    _map->insert(pair<string,int>("Victor",32));
    _map->insert(pair<string,int>("Bolinches",4324));
    
    map<string,int>::iterator it = _map->begin();
    for (it=_map->begin(); it!=_map->end(); ++it)
        cout << it->first << " => " << it->second << '\n';
    
    cout<< "Insert Alberto" << endl;
    _map->insert(pair<string,int>("Alberto",3233));
    
    cout<< "size " << _map->size() << endl;
    
    for(it = _map->begin() ; it != _map->end() ; ++it)
         cout << it->first << " => " << it->second << '\n';
    
    _map->clear();
    
    cout<< "size " << _map->size() << endl;
}

void _multimap(){
    multimap<string, int> *_multimap = new multimap<string, int>();
    
    _multimap->insert(pair<string, int>("a", 1));
    _multimap->insert(pair<string, int>("c", 2));
    _multimap->insert(pair<string, int>("b", 3));
    _multimap->insert(pair<string, int>("b", 4));
    _multimap->insert(pair<string, int>("a", 5));
    _multimap->insert(pair<string, int>("b", 6));

    cout << "Key a: " << _multimap->count("a") << endl;
    cout << "Key b: " << _multimap->count("b") << endl;
    cout << "Key c: " << _multimap->count("c") << endl;
    
    for (auto it = _multimap->begin(); it != _multimap->end(); ++it)
        cout << "  [" << it->first << ", " << it->second << "]" << endl;
   
    pair<multimap<string, int>::iterator, multimap<string, int>::iterator> ppp;
    
    ppp = _multimap->equal_range("b");

    cout << endl << "Range of \"b\" elements:" << endl;
    for (auto it2 = ppp.first;it2 != ppp.second; ++it2)
        cout << "  [" << (*it2).first << ", " << (*it2).second << "]" << endl;
    
    _multimap->clear();
}

void showExample014(){
    _vector();
    _list();
    _stack();
    _queue();
    _set();
    _multiset();
    _map();
    _multimap();
}

int main(int argc, const char * argv[]) {
    showExample014();
    return 0;
}
