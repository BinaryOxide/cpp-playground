#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{

int num , num2 , x , y , col1, col2 , row1 , row2;
cout << "Enter the last number : ";
cin >> num;



{for (row1 = 1 ; row1 <= num ; row1++)
    {
        for (col1 = 1 ; col1 < row1 ; col1++)
        cout << "" <<col1 ; 
        cout << endl;
    } 
}

{for (row1 = num; row1 >= 1 ; row1--)
    {
        for (col1 = 1 ; col1 <= row1 ; col1++)
        cout << "" <<col1 ; 
        cout << endl;
    } 
}
    getch();
}