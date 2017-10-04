//
//  binarytree.cpp
//  C++ Practice
//
//  Created by Kelsey Cameron on 9/13/17.
//  Copyright © 2017 Kelsey Cameron. All rights reserved.
//

#include <stdio.h>


struct binarytree{
    
    struct binarytree * left;
    struct binarytree * right;
    int data;
    
    
    binarytree(){
        left = NULL;
        right = NULL;
        data = 0;
        
    }
    binarytree(int data1) : data(data1){}
    struct binarytree * insert(int data, struct binarytree * root){
        
        if(root == NULL){
            return new binarytree(data);
        }
        if(data < root->data){
             root->left = insert(data, root->left);
        }
        if(data >= root-> data){
             root->right = insert(data, root->right);
        }
        
        return root;
        
    }
    
    
};
