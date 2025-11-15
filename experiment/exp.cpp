
#include <iostream>
#include <conio.h>
using namespace std;
class class_number_2; // Forward declaration of class_number_2
class class_number_3; // Forward declaration of class_number_3
class class_inheritance {
public:
    void display();
};
class class_number_1 : public class_inheritance {
private: int number_1;
public:
    void set_value_1(int shared_number_1) {
        number_1 = shared_number_1;
    }
    void display() {
        cout << "Value in Class Number 1 is: " << number_1 << endl;
    }
    friend void addition(class_number_1, class_number_2, class_number_3);
};
class class_number_2 : public class_inheritance {
private:  int number_2;
public:
    void set_value_2(int shared_number_2) {
        number_2 = shared_number_2;
    }
    void display() {
        cout << "Value in Class Number 2 is: " << number_2 << endl;
    }
    friend void addition(class_number_1, class_number_2, class_number_3);
};
class class_number_3 : public class_inheritance {
private: int number_3;
public:
    void set_value_3(int shared_number_3) {
        number_3 = shared_number_3;
    }
    void display() {
        cout << "Value in Class Number 3 is: " << number_3 << endl;
    }
    friend void addition(class_number_1, class_number_2, class_number_3);
};
void addition(class_number_1 object_1, class_number_2 object_2, class_number_3 object_3) {
    int sum = object_1.number_1 + object_2.number_2 + object_3.number_3;
    cout << "The Sum of the numbers is: " << sum;
}
int main() {
    class_number_1 object_1;
    object_1.set_value_1(100);
    object_1.display();

    class_number_2 object_2;
    object_2.set_value_2(200);
    object_2.display();

    class_number_3 object_3;
    object_3.set_value_3(500);
    object_3.display();

    addition(object_1, object_2, object_3); // Calling the friend function by passing objects
    getch();
}

