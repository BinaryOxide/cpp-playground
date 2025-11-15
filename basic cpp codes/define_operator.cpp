// C++ Program to illustrate the use of #define to create a 
// constant 
#include <iostream> 
using namespace std; 

// using #define to create a macro 
#define Side 5 

int main() 
{ 
	// using constant 
	const double area = Side * Side; 

	cout << "The area of square with side 5 is "; 
	cout << area; 

	return 0; 
}
