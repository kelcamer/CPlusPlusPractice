#include <iostream>
#include <stdio.h>
using namespace std;
void pointer_tests(){
    int number[] = {10,2,5};
    int * num;
    num = number;
    // insert code here...
    cout << "Come up and C++ me some time." << endl << "You won't regret it!" << endl;
    
    cout << "Address of number is " << num << endl;
    cout << "Number equals " << *num << endl;
    cout << "Address of next number is " << num + 2 << endl;
    cout << "Next number equals " << *(num+1) << endl;
    cin.get();
    
    
}
