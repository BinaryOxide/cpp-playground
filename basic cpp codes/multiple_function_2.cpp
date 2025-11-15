#include<iostream>
#include<conio.h>
using namespace std;
void addition      (int , int);   void substraction  (int , int);
void multiplication (int , int);  void division      (int , int);

int main(){
    addition      ( 30 , 3);  substraction( 30 , 3);
    multiplication( 30 , 3);  division    ( 30 , 3);

    getch();
}
void addition(int a, int b){
 int sum = a + b ;
 cout << "SUM             = " << sum << endl;
}

void substraction(int a, int b){
 int substraction  = a - b ;
 cout << "SUBSTRACTION   = " << substraction << endl;
}

void multiplication(int a, int b){
 int multiplication  = a * b ;
 cout << "multiplication = " << multiplication << endl;
}

void division(int a, int b){
 int division  = a / b ;
 cout << "division       = " << division << endl;
}
