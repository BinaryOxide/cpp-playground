 //  1 + 1/2 + 1/3 +.... + 1/ n
 #include <iostream>
 #include <conio.h>
 using namespace std;
 int main()
 {
double  num , sum=0 , i;  
 cout << "Enter the last number : ";
 cin >> num ;

 for ( i = 1  ;  i<= num ; i++ )
      {
         sum += (1 / i );
        if (i== 1)
          {
            cout << " 1 ";
          }
        else 
        {
           cout << " + "<< " 1/"<< i ;
        }
      }
cout << " = "<< sum;
 getch();
 }