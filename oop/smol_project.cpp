#include<iostream>
#include<conio.h>
using namespace std;
class Teacher_info
      {
       private:
        double salary;

        public:
       //property/attribute of every teachers
        string name; string department; string subject; int working_years;

      //functions/methods to do some operations
        int change_department_function(string passed_newDept)
            {
              department = passed_newDept;
            }
      //function to set the salary of teachers
        int set_salary(double passed_salary)    
            {
              salary = passed_salary;
            }
       int get_salary()
           {
             return salary;
           }
       
       
       

      };
int main()
{
  //let's create some objects(teachers) for the class 
    Teacher_info teacher_1;
    //add info to the teacher 1
      teacher_1.department = "computer science";
      teacher_1.name = "maruf hasan";
      teacher_1.subject = "c++";
      teacher_1.set_salary(20000);
      teacher_1.working_years = 4;

      cout << "Name:" << teacher_1.name << endl;      
      cout << "department:" << teacher_1.department << endl;
      cout << "subject:" << teacher_1.subject << endl;
      double received_salary = teacher_1.get_salary();
      cout << "salary :" << received_salary << endl;
      cout << "working years:" << teacher_1.working_years << endl;
     


getch();
}      