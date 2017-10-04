//
//  main.cpp
//  Learn_c++
//
//  Created by Kelsey Cameron on 6/5/17.
//  Copyright © 2017 Kelsey Cameron. All rights reserved.
//

#include <iostream>
#include "union_examples.cpp"
#include "struct_examples.cpp"
#include "string_perm.cpp"
#include "funny_alert.cpp"
#include "pointers.cpp"
#include "animals.cpp"
#include "class_practice.cpp"
#include "bits.cpp"
#include "linkedlist.cpp"
#include "binarytree.cpp"
list * reverseList(list * head){
    
    if(head == NULL)    return NULL;
    list * nextOne =head;
    list * current = head;
    list * prev = NULL;
    
    while(current != NULL){
    
        // make temp1 the new head.
        
        
        nextOne = current->next;        // get the next node
        current->next = prev;           // this effectively reverses the arrow by setting the next of the current equal to previous
        prev->prev = current;
        prev = current;                 // this saves current into a node for previous so once current is updated, prev stays
        current=nextOne;                // set current to the next node
        
    }
        
    return prev;
}


// return 1 if a cycle is detected, 0 otherwise
int detectCycle(list * mylist){
    
    list * temp = mylist->next;
    
    while(temp!=NULL){
        
        if(temp == mylist)    return 1;
        
        temp = temp->next;
    }
    
    
    
    return 0;
}
// return 1 if binary tree, return 0 if not.
int isBinTree(binarytree * root){
    if(root == NULL){
        return 0;
    }
    if(root->left != NULL){
        if(root->left->data >= root->data){
            return 1;
        }
        else{
            isBinTree(root->left);
        }
    }
    if(root->right != NULL){
        if(root->right->data < root->data){
            return 1;
        }
        else{
            isBinTree(root->right);
        }
    }
    
    
    
    
    return 0;
}

// return 0 if unbalanced, 1 if balanced.
// unbalanced means that either there is a branch with a left node with no right node,
// or there is a branch with a right node with no left node.
int isBalanced(binarytree * root){
    
    
    if(root->left != NULL){
        if(root->right == NULL){
            return 0;
        }
        if(isBalanced(root->left) == 0){
            return 0;
        }
        
    }
    if(root->right != NULL){
        if(root->left == NULL){
            return 0;
        }
        if(isBalanced(root->right) == 0){
            return 0;
        }
    }
    
    return 1;
}
int main() {
    using namespace std;
    
    
    
    
   // alert();
    // union_tests();
    //   F * test = new F();
    //char word[] = "abc";
    //permutate(word, 0, 3,0);
    ///////////////////////////////////////////////////
    
   /* dog Rio = {4,4,4};
    cout << "Rio has " << Rio.legs << " legs." << endl;
    Rio++;
    cout << "Rio now has " << Rio.legs << " legs." << endl;
    Rio--;
    cout << "Rio now has " << Rio.legs << " legs again.  \n"
        "Thank Goodness he is back to normal! "<< endl;
    
    
    dog Tinker = {1,1,1};
    cout << (Rio + Tinker).legs << endl;*/
    
    
    
    
   ///////////////////////////////////////////////////
    
   /* numbers * num = new numbers();
    
    num->set_num(3);
    cout << (num->get_num()) << endl;
    cout << (num++)->get_num() << endl;
*/
    
    
    
    
    
    ////////////////////////////////////////////////////
    /*
    youngperson kelsey;
    for(int x = 0; x < 32; x++){
        kelsey.age++;
        kelsey.signedage++;
        cout << "Unsigned age " << kelsey.age << endl;
        cout << "Signed age " << kelsey.signedage << endl;
    }
    int num = 2147483647;
    cout << "Max int " << num << endl;
    cout << "Max int + 1 " << num+1 << endl;
    */
   
       //////////////////////////////////////////////////
    
    // You can't delete a memory allocation twice.   However, this is handy if you want to delete memory allocations from a separate function.  Wow.
   /* int * point1 = new int;
    int * point2 = point1;
    delete point1;
    delete point2;*/
    
    
    
    
    //////////////////////////////////////////////////
    
    /*
    
    int * point1 = new int(5);
    cout << *point1 << endl;
    cout << point1 << endl;
    */
    
    /*
    
    
    node * first = new node(5);
    node * sec = new node(10);
   
    first->next = sec;
    
    
    
    cout << first->next->data;
    
    first->next->data = 11;
    
    cout << sec->data;
    
    
    delete(first);
    delete(sec);
    
    return 0;*/
    
    
    // mylist has to be a pointer because new allocates memory, so mylist must remember the memory address.
    list * mylist = NULL;
    
    
    mylist->insert(&mylist,5);
    mylist->insert(&mylist, 10);
    mylist->insert(&mylist, 20);
    mylist->insert(&mylist, 30);
    
   // cout << detectCycle(mylist);
   // mylist = reverseList(mylist);
    
    
    // so the double linked list works, and the code below prints it.
   /* while(mylist != NULL){
        cout << mylist->data;
        cout << ", ";
        mylist = mylist->next;
    }
  //  while(mylist != NULL){
    //    cout << mylist->data;
      //  cout << ", ";
       // mylist = mylist->prev;
    //}
    delete mylist;
    */
    
    binarytree * root = new binarytree(5);
    root = root->insert(10, root);
    root = root->insert(1, root);
    root = root->insert(100, root);
    root = root->insert(7,root);
  
    cout << "\n1 means that the tree is a binary tree.  \n0 means the tree is not a binary tree. \nYour answer is: \n";
    cout << isBinTree(root);
    
    cout << "\n1 means that the tree is balanced.  \n0 means the tree is not balanced. \nYour answer is: \n";
    cout << isBalanced(root) << endl;
    }

