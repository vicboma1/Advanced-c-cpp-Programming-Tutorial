//
//  Casteable.hpp
//  013 - Template function
//
//  Created by Victor Bolinches Marin on 29/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#ifndef Casteable_hpp
#define Casteable_hpp

#include <stdio.h>

template <class T>
    class Casteable {
    
    public :
    Casteable();
    ~Casteable();
   
template <class T2>
    T add(T2 arg, T2 arg2);
};

#include "Casteable.cpp"
#endif /* Casteable_hpp */
