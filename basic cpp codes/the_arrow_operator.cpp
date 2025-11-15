#include<iostream>
#include<conio.h>
using namespace std;
class class_person{
    public:
  int mark;
};
int main(){
 class_person object_1;
 class_person *pointer_object = &object_1;
 //* initialize the marks using basic object_1
     object_1.mark = 100;
          cout<<"base mark : "<<object_1.mark<<endl;

 //* initialize the mark(update) using pointer and
              (*pointer_object).mark = 78;
              cout <<"updated mark using pointer : " << object_1.mark << endl;;;;;
              //* initialize the mark(update) using pointer and arrow opearator
                pointer_object -> mark = 76;
                 cout <<"updated mark using arrow operator : " << object_1.mark << endl;
  getch();
}
