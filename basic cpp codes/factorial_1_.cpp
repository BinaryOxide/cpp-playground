#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    long i,n1,fact = 1;
    cout << "Enter number of factorial : ";
    cin >>n1;

    for(i=1;i<=n1;i++)
    //i==1 1<5 true
    //i==2 2<5 true......
    //i==6 6>5 false & stop
    {
       fact= fact*i;  
cout << "step "<< i<<" :"<<fact<<endl ;
    }
getch();

}