//
//  class_practice.cpp
//  C++ Practice
//
//  Created by Kelsey Cameron on 6/9/17.
//  Copyright © 2017 Kelsey Cameron. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class numbers
{
    private:
        int num;
    public:
    
    void set_num(int(n)){
        this->num = n;
    }
    int get_num(){
        return this->num;
    }
    
    numbers& operator++(int){
        this->num+=2;
        
        return *this;
    }
    
};
