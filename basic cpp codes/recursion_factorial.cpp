#include<iostream>   
#include<conio.h>
using namespace std;
int fact(int num ){

    if(num == 1){
        return 1 ;
    }

    else 
    return num * fact ( num - 1 );
}

int main(){


    int inputNumber ;

    cout << "Enter the number of factorial : ";
    cin >> inputNumber ;

    int factorial = fact(inputNumber) ;

    cout << factorial ;

  getch();
}