#include<iostream>
using namespace std;

class Increment {
private:
    int value;
public:
    // Default constructor
    Increment() {
        value = 10;  // Initialize value in the constructor body
    }

    // Overload the prefix increment operator
    Increment operator++() {
        Increment temp_object;
        value = value +1;  // Increment value
        temp_object.value = value;
        return temp_object;
    }

    void display_main_value() {
        cout << "Main Value: " << value << endl;
    }
    void display_after_increment() {
        cout << "After increment : " << value << endl;
    }
    void display_main_value_after_increment() {
        cout << "Main value after increment : " << value << endl;
    }
};

int main() {
    Increment object_increment_1, object_increment_2;
     // Display initial value of value
    object_increment_1.display_main_value(); 
    // Use the overloaded prefix increment operator
    object_increment_2 = ++object_increment_1;   
    // Display value after increment  
    object_increment_1.display_after_increment();
     // Display value returned by operator  
    object_increment_2.display_main_value_after_increment(); 
    return 0;
}
/*------------------------------> code explain ---->
Sure, I'd be happy to explain this code. It's written in C++ and it demonstrates the use of operator overloading and classes.

Here's a breakdown:

1. **Increment**: This class is designed to perform increment operations. It has a private integer member `value` and the following public members:
   - **Default constructor**: This constructor initializes `value` to 10.
   - **operator++()**: This function overloads the prefix `++` operator. It increments `value` by 1, assigns the incremented `value` to a temporary `Increment` object, and then returns the temporary object.
   - **display_main_value()**: This function displays the current value of `value`.
   - **display_after_increment()**: This function is intended to display the value of `value` after the increment operation.
   - **display_main_value_after_increment()**: This function is intended to display the value of `value` after the increment operation. It's essentially the same as `display_after_increment()`.

2. **main function**: This is where the program starts. It does the following:
   - Creates two `Increment` objects: `object_increment_1` and `object_increment_2`.
   - Displays the initial value of `value` for `object_increment_1`.
   - Uses the overloaded prefix `++` operator to increment `object_increment_1` and assigns the returned object to `object_increment_2`.
   - Displays the value of `value` for `object_increment_1` after the increment operation.
   - Displays the value of `value` for `object_increment_2`, which should be the same as the incremented value of `object_increment_1`.

This program demonstrates how you can overload operators in C++ to perform operations in a way that's intuitive and easy to understand. It also shows how you can use classes to encapsulate related data and functions. I hope this helps! Let me know if you have any other questions.



Start
 |
 |--> class Increment
 |     |
 |     |--> Initialize value to 10
 |     |
 |     |--> Overload prefix increment operator
 |     |     |
 |     |     |--> Increment value
 |     |     |
 |     |     |--> Return incremented value
 |     |
 |     |--> Display main value
 |     |
 |     |--> Display value after increment
 |     |
 |     |--> Display main value after increment
 |
 |--> main()
       |
       |--> Create two objects of Increment class
       |
       |--> Display initial value of object_increment_1
       |
       |--> Use overloaded prefix increment operator on object_increment_1
       |
       |--> Display value of object_increment_1 after increment
       |
       |--> Display value of object_increment_2 after increment
       |
       |--> End


*/