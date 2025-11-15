//overloading_new_and_delete_operator
//include header-files


#include<iostream>
#include<cstring>
using namespace std;

class class_student{
    private:
    string name; int class_number ; int roll ;int age;
    public:
    class_student(){
        name = "default_nothing";
        class_number = 0 ; age = 0 ; roll = 0 ;
    }
    class_student(string name,int class_number,int roll,int age ){
        this -> name = name;
        this -> class_number = class_number;
        this -> roll = roll;
        this -> age = age;
    }
    void display_output(){
        cout << "name = " << name << endl;
        cout << "class_number = " << class_number << endl;
        cout << "roll = " << roll << endl;
        cout << "age = " << age << endl;
    }
    void *operator new(size_t size){
        void *pointer_varaiable ;
        cout << "overloaded new size is :" << size << endl;
        pointer_varaiable = malloc(size); 
        return pointer_varaiable;
    }
    void operator delete(void *pointer_varaiable){
        cout <<"delete done !" << endl;
        free(pointer_varaiable);
        cout << "Memory freeing is complete !" << endl;
    }
};

int main(){
    class_student *object_details;
    object_details = new class_student("obito",9,12,14);
    object_details->display_output();
    delete object_details;
    return 0;
}
