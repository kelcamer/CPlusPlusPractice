//
//  bits.cpp
//  C++ Practice
//
//  Created by Kelsey Cameron on 6/13/17.
//  Copyright © 2017 Kelsey Cameron. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;


typedef struct youngperson{
    unsigned int age : 5;
    // age contains only 5 bits.  2^5 = 32, so this can count to 32 distinct values.
    
    signed int signedage : 5;
    // if I don't specify unsigned, by default the number is signed, so it can express as many negative values as positive values.   As a result, this signed age can only count from -16 to 16, rather than 0 to 32, despite the fact that it is five bits. The reason for this is that the negative sign actually takes up the first bit.   Fascinating.
    
    char person : 2;
    
    const char * c1= new char('a');
    char const * c2= new char('b');
    char * const c3= new char ('c');
    
    
    
    
};


