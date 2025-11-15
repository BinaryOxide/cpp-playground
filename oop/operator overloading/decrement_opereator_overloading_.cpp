#include<iostream>
using namespace std;

class decrement {
private:
    int value;
public:
    // Default constructor
    decrement() {
        value = 10;  // Initialize value in the constructor body
    }

    // Overload the prefix decrement operator
    decrement operator--() {
        decrement temp_object;
        value = value -1;  // decrement value
        temp_object.value = value;
        return temp_object;
    }

    void display_main_value() {
        cout << "Main Value: " << value << endl;
    }
    void display_after_decrement() {
        cout << "After decrement : " << value << endl;
    }
    void display_main_value_after_decrement() {
        cout << "Main value after decrement : " << value << endl;
    }
};

int main() {
    decrement object_decrement_1, object_decrement_2;
     // Display initial value of value
    object_decrement_1.display_main_value(); 
    // Use the overloaded prefix decrement operator
    object_decrement_2 = --object_decrement_1;   
    // Display value after decrement  
    object_decrement_1.display_after_decrement();
     // Display value returned by operator  
    object_decrement_2.display_main_value_after_decrement(); 
    return 0;
}