#include<iostream>
#include<conio.h>
using namespace std;
int main(){
 int array[3][2][2]={
   {{2,5},{7,9}},
   {{3,4},{6,1}},
   {{0,8},{11,13}}

 };
 int (*pointer)[2][2] = array;

cout<< *(array[0][1]+1) << endl;//* output:9
cout<< (array[0][1]+1) << endl;//* output:812(address)

cout << endl;
cout<<"*array[1][1]    = " << *array[1][1]    << endl;//* output: 6
cout<<" array[1][1]    = " <<  array[1][1]    << endl;//* output: 824 (address)

cout << endl;
cout<<"array[1][1][0]  = " << array[1][1][0]  << endl;//* output: 6
cout<<"&array[1][1][0] = " << &array[1][1][0] << endl;//* output: 824 (address)
cout << endl;
cout<< "*(*array[1]+1) = " << *(*array[1]+1)<< endl;//* output: 4
cout<< "*(*array[1]) = " << *(*array[1])<< endl;//* output: 3
cout<< "(array[1]) = " << (array[1])<< endl;//* output: 3
cout<< "(array[1]+1)  = " <<  (array[1]+1) << endl;//* output: 820 (address)
 
cout << endl;
cout<< "*(*array[1]) = " << *(*array[1])<< endl;//* output: 3
cout<< "*(*array[1]+2) = " << *(*array[1]+1)<< endl;//* output: 4
cout<< "*(*array[1]-2) = " << *(*array[1]-2)<< endl;//* output: 7
cout<<  "( array[1][2]+2)  = " <<  (array[1][1]+1) << endl;//* output: 808 (address)
cout<<  "(*array[1][2]+2)  = " <<  (*array[1][1]+1) << endl;//* output: 7
 
 cout << endl;
cout<< "*(*array[1]+3) = " << *(*array[1]+3)<< endl;//* output: 4
cout<< "(array[1]+3)  = " <<  (array[1]+3) << endl;//* output: 820 (address)
cout<< "(array[1]+3)  = " <<  (array[1]+3) << endl;//* output: 820 (address)


cout<< "*(*array[1]) = " << *(*array[1])<< endl;//* output: 3
getch();
}