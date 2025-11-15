#include<iostream>
#include<conio.h>
using namespace std;
class class_array{
    int array_subjects[3];
    public:
    // add constructor
    class_array(int subject_1 , int subject_2,int subject_3){
        array_subjects[0] = subject_1;
         array_subjects[1] = subject_2;
          array_subjects[2] = subject_3;
    }
     int operator[](int position){
        return array_subjects[position];
     }

};
int main(){
    class_array object_number(70,69,87);
    cout << "subject 1 = " << object_number[0] << endl;
    cout << "subject 2 = " << object_number[1] << endl;
    cout << "subject 3 = " << object_number[2] << endl;
    getch();
}