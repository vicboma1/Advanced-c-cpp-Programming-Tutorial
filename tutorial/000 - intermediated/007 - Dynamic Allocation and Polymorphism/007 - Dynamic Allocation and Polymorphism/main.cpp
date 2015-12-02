//
//  main.cpp
//  007 - Dynamic Allocation and Polymorphism
//
//  Created by Victor Bolinches Marin on 24/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>
using namespace std;

class Polygon {
protected:
    int width, height;
public:
    Polygon (int a, int b) : width(a), height(b) {}
    virtual ~ Polygon(){
        cout <<"Destructor Polygon"<< this <<endl;
    }
    virtual int area (void) = 0;
    void printarea()
    {
        cout << this->area() << '\n';
    }
};

class Rectangle: public Polygon {
public:
    Rectangle(int a,int b) : Polygon(a,b) {}
    virtual ~Rectangle(){
        cout <<"Destructor Rectangle"<< this <<endl;
    }
    int area()
    {
        return width*height;
    }
};

class Triangle: public Polygon {
    public:
    Triangle(int a,int b) : Polygon(a,b) {}
    virtual ~Triangle(){
        cout <<"Destructor Triangle "<< this <<endl;
    }
    int area()
    {
        return width*height/2;
    }
};


void showExample006(){
    Polygon * ppoly1 = new Rectangle (4,5);
    Polygon * ppoly2 = new Triangle (4,5);
    ppoly1->printarea();
    ppoly2->printarea();
    delete ppoly1;
    delete ppoly2;
}

int main(int argc, const char * argv[]) {
    showExample006();
    return 0;
}
