#include<iostream>
#include<conio.h>
using namespace std;
int main(){
 int array[3][2][2]={
   {{2,5},{7,9}},
   {{3,4},{6,1}},
   {{0,8},{11,13}}

 };
 //*dimension for 3d array
 for (int dimension = 0 ; dimension < 3 ; dimension++){
   cout << endl << endl;
  //* loop of rows
   for (int rows = 0 ; rows < 2 ; rows++){
    //* loop of columns
    for (int columns = 0 ; columns < 2 ; columns++){
      cout << "array[" <<dimension<<"]["<< rows <<"]["<<columns << "] = ";    
      cout << array[dimension][rows][columns];
      cout << endl;
    }  
    cout << endl;
   }
   cout << endl;
 }
 //* add some print statements
 // array[dimension][rows][columns] = 
getch();
}