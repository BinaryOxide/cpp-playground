#include<iostream>
#include<conio.h>
using namespace std;
class class_student{
  private:
  int id = 100;
  string name = "obito";
  public:
  friend class  class_teacher; 
};

class class_teacher{ public:
void display(class_student student_object){
  cout << "ID : "<< student_object.id << endl;
  cout << "Name : " << student_object.name << endl;
}

};
int main(){
 class_student object_student;
 class_teacher object_teacher;
 object_teacher.display(object_student);


  getch();
}