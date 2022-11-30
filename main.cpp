//intro to pointers.
#include <iostream>
using namespace std;

int main ()
{
    int var = 30; //initialize variable with value 30.
    int *pointer; //declare a pointer variable with name "pointer."

    pointer = &var; //assign the pointer the memory address of var = 30.
    cout << pointer << endl; //points to the address of var. hence, it'll print out a hexadecimal number.
    cout << *pointer; //prints the value of the address the pointer is pointing too. in this case 30.
    return 0;
}
