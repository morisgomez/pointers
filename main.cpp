//intro to pointers.
#include <iostream>
using namespace std;

int main ()
{
    int var = 30; //initialize variable with value 30.
    int *pointer; //declare a pointer variable with name "pointer." 
    //line 8 reads: "pointer to int" - we use type int for the pointer var bc we are the storing the address of an int value (30).
    // if the variable var type were double, then based on the latter logic, the type of the pointer variable would be doubel as well.

    pointer = &var; //assign the pointer the memory address of var = 30.
    cout << pointer << endl; //points to the address of var. hence, it'll print out a hexadecimal number.
    cout << *pointer; //prints the value of the address the pointer is pointing to. in this case 30.
    return 0;
}
