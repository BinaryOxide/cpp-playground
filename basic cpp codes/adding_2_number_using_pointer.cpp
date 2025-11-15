#include<iostream>   
#include<conio.h>
using namespace std ;
int main(){

    int num1 = 10 , num2 = 20 ;
    int *index1 , *index2 ;

    index1 = &num1 ;
    index2 = &num2 ;

    int sum = *index1 + *index2 ;

    cout << sum ;
    getch();
}