//
//  Casteable.cpp
//  013 - Template function
//
//  Created by Victor Bolinches Marin on 29/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#ifdef Casteable_hpp


template <class T>
Casteable<T>::Casteable(){

}



template <class T>
template <class T2>
T Casteable<T>::add(T2 arg, T2 arg2){
    return arg + arg2;
    }

#endif