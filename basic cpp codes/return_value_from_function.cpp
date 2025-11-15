#include<iostream>
#include<conio.h>
using namespace std;
double addition  (double , double);
int main(){
    addition      ( 30.20 , 3.20);
}
double addition(double a, double b){
 double sum = a + b ;
 cout << "SUM             = " << sum << endl;
 return sum ;
}