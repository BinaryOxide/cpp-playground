#include<iostream> // Include the iostream library for input/output
#include<conio.h> // Include the conio.h library for console input/output (non-standard)

using namespace std; // Use the standard namespace

int main() {
    // Declare a pointer to an integer
    int  *pointer_variable;

    // Allocate memory for an integer on the heap and assign its address to the pointer
    pointer_variable = new int;
 
    // Assign the value 25 to the memory location pointed to by the pointer
    *pointer_variable = 25;

    // Print the value at the memory location pointed to by the pointer
    cout << "value before  delete  = " << *pointer_variable << endl;

    // Deallocate the memory previously allocated with new
    delete pointer_variable;

    // Attempting to access the value at the memory location pointed to by the pointer after it has been deleted
    // This is not a good practice because it leads to undefined behavior
    cout << "value after delete  = " << *pointer_variable << endl;

    // Wait for a character input to prevent the console from closing immediately
    getch();
}
