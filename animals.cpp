//
//  animals.cpp
//  C++ Practice
//
//  Created by Kelsey Cameron on 6/8/17.
//  Copyright © 2017 Kelsey Cameron. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

struct dog{
    int legs;
    int eyes;
    int ears;
    int totaldogs;
    
    dog(int leg, int eye, int ear){
        this->legs = leg;
        this->eyes = eye;
        this->ears = ear;
        
    }
    dog(){
        legs = 4;
        eyes = 2;
        ears = 2;
    }
    dog operator++(int){
      
        this->ears+=1;
        this->eyes+=1;
        this->legs+=1;
        
        
        return *this;
        
        
    }
    dog operator--(int){
        
        this->ears-=1;
        this->eyes-=1;
        this->legs-=1;
        
        
        return *this;
        
        
    }
    dog operator+(dog d){
        this->legs += d.legs;
        this->ears += d.ears;
        this->eyes += d.eyes;
        return *this;
        
    }

};


struct octopus{
    
    int legs;
    int eyes;
    int ears;
    
    octopus(int leg, int eye, int ear){
        this->legs = leg;
        this->eyes = eye;
        this->ears = ear;
        
    }
    
    
};

class animals{
    
    
    
    dog Rio = {2,2,2};
    octopus ink = {2,8,0};
    
   
    
    animals operator+(const animals&){
        animals temp;
        temp.Rio.legs += temp.ink.legs;
        temp.Rio.ears += temp.ink.ears;
        temp.Rio.eyes += temp.ink.eyes;
        
        return temp;
        
    }
    
};

