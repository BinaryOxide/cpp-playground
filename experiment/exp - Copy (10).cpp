#include <iostream>
using namespace std;

class number {
private:
    int value;

public:
    number(){
        value = 5; // Constructor to initialize number to 5
    } 

    // Overload ++ when used as prefix
    void operator++() {
        ++value;
    }

    // Overload ++ when used as postfix
    void operator++(int) {
        value++;
    }

    void display_postfix() {
        cout << " Postfix number: " << value << endl;
    }
    void display_prefix() {
        cout << " Prefix number: " << value << endl;
    }
};

int main() {
    number count1;
    count1++; // Call the "void operator++(int)" function
    count1.display_postfix();
    ++count1; // Call the "void operator++()" function
    count1.display_prefix();
     ++count1; // Call the "void operator++()" function
    count1.display_prefix();
    


    return 0;
}
