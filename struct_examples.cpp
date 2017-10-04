#include <iostream>
using namespace std;


struct A { A(){ cout << "A"; } };
     struct B { B(){ cout << "B"; } };
         struct C { C(){ cout << "C"; } };
            struct D { D(){ cout << "D"; } };
                 struct E : D { E(){ cout << "E"; } };
                  struct F : A, B
                    {
                        
                         C c;
                         D d;
                         E e;
                         F() : B(), A(),d(),c(),e() { cout << "F"; }
                        
                    };


/*

 prints ABCDDEF
 Class Member variables are always initialized in the order in which they are DECLARED in the class.
 
 They are NOT initialized in the order in which they are specified in the Member Initalizer List.
 In short, Member initialization list does not determine the order of initialization.
 
 Given the above it is always a good practice to maintain the same order of members for Member initialization as the order in which they are declared in the class definition. This is because compilers do not warn if the two orders are different but a relatively new user might confuse member Initializer list as the order of initialization and write some code dependent on that.

*/
