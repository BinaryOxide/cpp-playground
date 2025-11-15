#include <iostream>
#include <conio.h>
using namespace std;
class class_number {
private:int value;public:
    class_number(){
    value = 5 ;}// Constructor to initialize class_number to 5 
    // Overload ++ when used as prefix
    void operator++() {++value;}
    // Overload ++ when used as postfix
    void operator++(int) {value++;}
    void display_increment_postfix() {
        cout << " Postfix increment number: " << value << endl;}
    void display_increment_prefix() {
        cout << " Prefix increment number: " << value << endl;}
    // Overload -- when used as prefix
    void operator--() {--value;}
    // Overload -- when used as postfix
    void operator--(int) {
        value--;}
    void display_decrement_postfix() {
        cout << " Postfix decrement number: " << value << endl;}
    void display_decrement_prefix() {
        cout << " Prefix decrement number: " << value << endl;}
};
int main() {
    cout << "defalut number = 5 "<< endl << endl;
    class_number object_increment;
    object_increment++; // Call the "void operator++(int)" function
    object_increment.display_increment_postfix();
    ++object_increment; // Call the "void operator++()" function
    object_increment.display_increment_prefix();
     ++object_increment; // Call the "void operator++()" function
    object_increment.display_increment_prefix();
cout << endl << endl << endl;
    class_number object_decrement;
    object_decrement--; // Call the "void operator--(int)" function
    object_decrement.display_decrement_postfix();
    --object_decrement; // Call the "void operator--()" function
    object_decrement.display_decrement_prefix();
     --object_decrement; // Call the "void operator--()" function
    object_decrement.display_decrement_prefix();
    getch(); 
}