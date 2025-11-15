// C++ Program to implement
// Class Template Arguments 
// Deduction
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

// defining class template
template <typename t>
class student_class {
private:
	string student_name;
	t total_marks;

public:
	
	// parameterized constructor
	student_class(string passed_name, t passed_marks)
	{
		student_name = passed_name;
		total_marks = passed_marks;
	}

	void getinfo()
	{
		cout << "STUDENT NAME: " << student_name << endl;
		cout << "TOTAL MARKS: " << total_marks << endl;
		cout << "Type ID: " << typeid(total_marks).name()
			<< endl;
	}
};

int main()
{
	// student <int> is used to fulfill
	// template requirements
	student_class<int> object_st1("OBITO", 100);
	student_class<int> object_st2("ITACHI", 100.0);

	object_st1.getinfo();
	object_st2.getinfo();

	return 0;
}
