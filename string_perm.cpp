//
//  string_perm.cpp
//  C++ Practice
//
//  Created by Kelsey Cameron on 6/8/17.
//  Copyright © 2017 Kelsey Cameron. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

void swap(char string[], int ind1, int ind2){
    
    char temp = string[ind1];
    string[ind1] = string[ind2];
    string[ind2] = temp;
    
}


void permutate(char  string[], int index, int size, int count){
    
        if(index == size){
          cout << string << endl;
        }
        else{
            for(int x = index; x < size; x++){
        
    
                swap(string, index, x);
                permutate(string, index+1, size, count);
                swap(string, index, x);
        
            }
    

   
    
   
        }
    
}

