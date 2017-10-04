//
//  linkedlist.cpp
//  C++ Practice
//
//  Created by Kelsey Cameron on 6/28/17.
//  Copyright © 2017 Kelsey Cameron. All rights reserved.
//




#include <stdio.h>
#include <string.h>

typedef struct list{
    int data;
    list * next;
    list * prev;
   
    public:
    list(){
        data = 0;
        next = NULL;
        prev = NULL;
        
    }
    
    // this is an example of an initialization list.   data(num3) is the equivalent of this->data = num3;
    list(int num3, struct list * next3, struct list * prev3) : data(num3), next(next3), prev(prev3){}
    
    list(int data2) : data(data2), next(NULL), prev(NULL){}
    
    void insert(list ** head, int num){
         list * nextnode = new list(num);
        
        
        // this doesn't work because when you use the new keyword, it allocates memory so head = 0 doesn't mean head = null
        // the solution to this is to just check for null and don't store the head within each object
        // the head should only be user created - the first node, passed in as an argument
        
        if(*head == NULL){
            *head = nextnode;
        }
        else{
            // modifying temp also modifies head because temp stores the head location.
            list * temp = *head;
            while(temp->next!= NULL){
                
                temp = temp->next;
                }
            nextnode->prev = temp;

            temp->next = nextnode;
            
        }
        
    }
    // Only constructors take base initializers.
    void setData(int num){
        this->data = num;
    }
    void setNextPointer(struct list * next2){
        this->next = next2;
        
    }
    
};
