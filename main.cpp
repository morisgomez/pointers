//intro to pointers.
#include <iostream>
using namespace std;

int main ()
{
    int var = 30; //initialize variable with value 30.
    int *pointer1; //declare a pointer variable with name "pointer."

    int *pointer2;
    pointer2 = nullptr;

    int *pointer3 = nullptr;

    pointer1 = &var; //assign the pointer the memory address of var = 30.
    cout << "pointer1 memory address: " << pointer1 << endl; //points to the address of var. hence, it'll print out a hexadecimal number.
    cout << "value at pointer1 memory address: " << *pointer1 << endl; //prints the value of the address the pointer is pointing too. in this case 30.
    cout << "pointer2 is a null: " << pointer2 << endl; //prints out zero bc memory address is zero when NULL. POINTS TO NOTHING.
    cout << "pointer3 is also a null: " << pointer3 << endl; //useful to set pointers to null to give it a value later on in program.

    //HOW TO CHECK IF A VARIABLE IS NULL - IF NULL, DO NOT USE.
    if (pointer3 == nullptr) //will always be true bc pointer3 is never changed.
    {
        cout << "Pointer3 is still null.";
    }
    else if (pointer3 != nullptr)
    {
        cout << "pointer3 is not null.";
    }
    return 0;
}
