#include <iostream>
#include <conio.h>
using namespace std;
//  pattern 1 
int main()
{
    int num ;  //?  Number of rows
    int col , row ;

    cout << "Enter number of rows : ";
    cin >> num ;

    for ( row = 1 ; row <= num ; row++) 
    {
        char c = 'a';
        for (col = 1; col <= row ; col++) {
            cout << c  << " ";
            c++;
        }
        cout << endl;
    }
    getch();

}
//    example -  
//    Enter number of lines : 4
//    a
//    b b
//    c c c
//    d d d d
