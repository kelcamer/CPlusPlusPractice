//
//  unions_examples.cpp
//  Learn_c++
//
//  Created by Kelsey Cameron on 6/7/17.
//  Copyright © 2017 Kelsey Cameron. All rights reserved.
//
#include <iostream>
#include <stdio.h>
using namespace std;
void union_tests(){
    
    
    typedef union{
        int num_age;
        char str_age[3];
        
    }Union;
    
    
    Union age = {100};
    cout << "Age is " << age.num_age << endl;
    Union age2;
    strcpy(age2.str_age, "21");
    
    cout << "Age is " << age2.str_age << endl;
    cout << "Test " << age2.num_age << endl;
    
    
    
}
