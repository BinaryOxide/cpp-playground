#include <iostream>
  #include <conio.h>
    using namespace std;
        int main()
          {  int i,n1,n2;
            cout << "break point <= times ";
            cout << endl;
            cout << "Enter times : ";
                  cin >> n1;
            cout<< "Enter break point :";
                  cin>>n2;

  for ( i=1; i<=n1;i++)
  {
    if (i==n2)
     {
          break;
     }
   cout<< i << "  ";
  }
getch();

}