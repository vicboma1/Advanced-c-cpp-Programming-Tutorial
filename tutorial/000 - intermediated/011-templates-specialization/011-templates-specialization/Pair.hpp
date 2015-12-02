//
//  Pair.hpp
//  010 - Templates
//
//  Created by Victor Bolinches Marin on 27/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

//Based on  Pair(c1,c2) of Kotlin.
#ifndef Pair_hpp
#define Pair_hpp

#include <stdio.h>

template <class T1,class T2>
class Pair {
    T1 a;
    T2 b;
public:
    Pair (T1 first, T2 second)
    {
        a = first;
        b = second;
    }
    
    T1 component1();
    T2 component2();
};
#include "Pair.cpp"
#endif /* Pair_hpp */
