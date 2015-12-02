//
//  main2.cpp
//  005 - Polymorphism
//
//  Created by Victor Bolinches Marin on 24/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

// virtual members
#include <iostream>
using namespace std;

class Polygon {
    
protected:
    int width, height;
public:
    void set_values (int a, int b)
    {
        width = a;
        height = b;
    }
    virtual int area ()
    {
        return 0;
    }
};

class Rectangle: public Polygon {
public:
    int area ()
    {
        return width * height;
    }
};

class Triangle: public Polygon {
public:
    int area ()
    {
        return (width * height / 2);
    }
};

void showExample006(){
    Rectangle rect;
    Triangle trgl;
    Polygon poly;
    Polygon * ppoly1 = &rect;
    Polygon * ppoly2 = &trgl;
    Polygon * ppoly3 = &poly;
    ppoly1->set_values (4,5);
    ppoly2->set_values (4,5);
    ppoly3->set_values (4,5);
    cout << ppoly1->area() << '\n';
    cout << ppoly2->area() << '\n';
    cout << ppoly3->area() << '\n';
    
}
int main () {
    showExample006();
    return 0;
}