#include <iostream>
  #include <conio.h>
    using namespace std;
int main()
{
    int num , temp , rem , sum=0;
      int initial , final , i;
    cout << "Enter initial value :";
      cin >> initial;
    cout << endl;  
    cout <<"Enter final value :";
       cin >> final;
    for (i = initial ; i<=final; i++)
{    
    temp = i;
      while (temp!= 0 )
          {
            rem = temp % 10;
              sum = sum + rem * rem * rem;
                temp = temp /10;
          }
    if (sum == i)
           {cout << i << " ";}
           sum= 0;

}           
    // if (sum =num)
       //{cout << sum << " is armstrong ";}
          //{cout <<num<<" & "<<sum<<" is same !";}
    //else
      //  {cout <<sum<<" is not armstrong";}
        //  {cout << endl;}
          //  {cout <<sum<<" & "<<num<<" is not same !";}
            //  {cout << endl << endl;}
             {cout << endl << endl << endl; } 
             {cout << "Done !";}
             getch();     
}