#include <iostream>
#include <conio.h>
  using namespace std;
    int main()
{     int i,n1,n2,n3;
cout << "Enter small (starting) number   : ";
            cin >> n1;//starting number
cout << "Enter large  number             : ";
            cin >> n2;//large number
cout << "Enter removed number            : ";
            cin >> n3;//removed number
 for (i=n1; i<=n2 ; i++)
 {
     if(i=n3)
    { 
    continue; 
    }
         cout << i <<"  ";
 }
 getch();

}