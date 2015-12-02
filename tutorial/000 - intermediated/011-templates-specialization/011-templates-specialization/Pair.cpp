//
//  Pair.cpp
//  010 - Templates
//
//  Created by Victor Bolinches Marin on 27/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#ifdef Pair_hpp

template <class T1,class T2 >
T1 Pair<T1,T2>::component1()
{
    return a;
}

template <class T1,class T2 >
T2 Pair<T1,T2>::component2(){
    return this->b;
}


#endif