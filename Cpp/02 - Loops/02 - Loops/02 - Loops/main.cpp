//
//  main.cpp
//  02 - Loops
//
//  Created by Victor Bolinches Marin on 19/11/15.
//  Copyright © 2015 Victor Bolinches Marin. All rights reserved.
//

#include <iostream>
using namespace std;

void showExampleFor(){
    for ( int x = 0; x < 5; x++ ) {
        cout<< "For "<< x <<endl;
    }
    cin.get();
}

/**
 For 0
 For 1
 For 2
 For 3
 For 4
 */

void showExampleWhile(){
    int x = 0;
    while ( x < 5 ) {
        cout<< "While " << x << endl;
        x++;
    }
    cin.get();
}

/**
 While 0
 While 1
 While 2
 While 3
 While 4
 */

void showExampleDoWhile(){
    int x = 0;
    do {
        cout<< "Do/While " << x << endl;
        x++;
        
    } while ( x < 5 );
    cin.get();
}

/** 
 Do/While 0
 Do/While 1
 Do/While 2
 Do/While 3
 Do/While 4
 */


int main(int argc, const char * argv[]) {
   
    showExampleFor();
    showExampleWhile();
    showExampleDoWhile();
    
    return 0;
}

