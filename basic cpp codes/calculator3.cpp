#include <iostream>
#include <conio.h>
using namespace std;
int main()
 { 
    cout << "For multiplication-table ,    press  $ " <<endl;
    cout << "For Plus                      press  + " <<endl;
    cout << "For Minus                     press  - " <<endl;
    cout << "For Multiplication            press  * " <<endl;
    cout << "For Division                  press  / " <<endl;
    cout << "For leap year                 press  ! " <<endl;
    cout << "For Prime number              press  < " <<endl;
    cout << "FOR reverse number            press  > " <<endl;
    cout << "For sum of digit              press  : " <<endl;
    cout << "For lcm                       press  ~ " <<endl;
    cout << "For gcd                       press  ` " <<endl;
    cout << "For marks                     press  & " <<endl<<endl<<endl;  
    char op;
      cout << "select operator :";
      cin >> op;

      switch (op)
      {
        
        case '+' :            //basic calculator start
       {int n1,n2;
       cout << "Enter 1st number : ";
       cin >> n1;

       cout << "Enter 2nd number : ";
       cin >> n2;

       cout << n1 << op << n2 << " = "<< n1 + n2;
       break;

      case '-':
      cout << "Enter 1st number : ";
      cin >> n1 ;

      cout << "Enter 2nd number : ";
      cin >> n2 ;

      cout <<  n1 << op << n2 << " = "<< n1 - n2;
      break;

      case '*':
      cout << "Enter 1st number : ";
      cin >> n1;

      cout << "Enter 2nd number :";
      cin >> n2;

      cout <<  n1 << op << n2 << " = "<< n1 * n2;
      break;

      case '/':
      cout << "Enter 1st number : ";
      cin >> n1;
      
      cout << "Enter 2nd number : ";
      cin >> n2;

      cout << n1 << op << n2 << " = " << n1 / n2;
      break;
      }
case '`':                               // gcd (start)
{
 int num1,num2,n1,n2,rem,gcd,lcm;
 cout<< "Enter 2 number :";
 cin>> num1>>num2;
 n1=num1;
 n2=num2;
 while(n2!=0)
 {   rem=n1%n2;
        n1=n2;
           n2=rem;
 } gcd =n1;
 lcm=(num1 * num2) / gcd;
 cout <<"GCD = " << gcd <<endl;
 cout << "Done !";
 break;
}                                    //gcd (end)
  
case '~':                            // lcm (start)
{
 int num1,num2,n1,n2,rem,gcd,lcm;
 cout<< "Enter 2 number :";
 cin>> num1>>num2;
 n1=num1;
 n2=num2;
 while(n2!=0)
 {   rem=n1%n2;
        n1=n2;
           n2=rem;
 } gcd =n1;
 lcm=(num1 * num2) / gcd;
 cout <<"LCM = " << lcm <<endl;
 cout << "Done !";
 break;
}                              //lcm (end)
  
                              // basic calculator end 
case ':':                     // sum of number (start)
{
  int num, rem,temp, sum=0;
  cout << "Enter any number :";
  cin >> num;
  temp = num;
  while (temp!=0)
  {
    rem  = temp % 10;
    sum  = sum  + rem;
    temp = temp / 10;
  }
cout << "Sum of digits : "<< sum;
break;
}                           // sum of number (end)

case '>':                   // reverse number (start) 
{
 int num , rem , temp , sum=0;
cout << "Enter the  number :";
cin>> num;  
temp = num;
while (temp != 0 )
{
    rem =  temp % 10;
    sum = sum*10 + rem;
    temp = temp /10;
}
cout << "Reverse umber = "<< sum;
break;
}                            // reverse number (end)
case '<':                    // prime number (start) 
{
  int i, n1, count=0;
  cout << "Enter any positive number :";
  cin >> n1;

  for (i=1 ; i<n1; i++)
  {
       if (n1 % i == 0)
          {
            count++;
            break;
          }
  }
if (count == 0)
       {
          cout << n1<< " is prime number ";
       }
else if (count >0)
       {
         cout << n1 << "is not prime number";
       }
else {cout << "ERROR ! ";}
break;
}                                 // prime number (end)
                    
case '$': // multiplication table start 
{  
    cout << "For low to high    press 0"<<endl;
    cout << "For high to low    press 1"<<endl;
    cout << "Enter key : ";
  int marks;
  cin>>marks;


if (marks == 0)
{ //int n1,n2;
  // cout << "Enter number : ";
  // cin >>n1;

  // cout<< "start from : ";
  //cin >>n2;
  
  //int i =n2;
  //do{cout <<n1<<"*"<<i<<"="<<n1*i<<endl;
  //  i--;
  // } while (i>=n1);
   int n1,n2,n3;
   cout<< "Enter multiplication number :";
   cin>> n1;

   cout<< "Enter multiplication times :";
   cin>> n2;

   cout<< " miltiplication ends in (1) : ";
   cin>> n3;  

   int num =n1 ;
    int i = n2;
    do {
        cout << num << " x " << i << " = " << num * i << endl;
        i--;
    } while (i >=n3 );
    
}

       else if(marks==1)
          { int num,n0;
             cout << "Enter any number :";
               cin >> num;

              cout << "How many times do you want to multiply ?"<<endl ;
            cout << "Enter times : "  ;
         cin >> n0;
      int i=1;

              while (i<=n0)
                   {        
         cout << num <<" * "<< i << " = "<<num * i << endl;
          i++;
                   }

                  }
   else {cout << "Please enter valid code !";}
break;

}                                 // multiplication table end

case '&':                         // marks (start)
   { int marks;
     cout << "Enter your marks : ";
     cin >> marks; 
     cout<<endl;
    
    if (marks >100 )
    {cout << "Invalid marks."<<endl<<endl<<"Please Enter valid marks." ;}


    else if (marks>= 80 )
    {cout << "A+";}

    else if (marks>= 70 )
    {cout << "A";}

    else if (marks>= 60 )
   {cout << "A-";}

    else if (marks>= 50 )
    {cout << "B";}

    else if (marks>= 40 )
    {cout << "C";}

    else if (marks>= 33 )
    {cout << "D";}

    else {cout << "Fail"<<endl<< "Better lick next time !";};
   break;}                     //marks (end)

case '!':                      // leap year (start)
{ int year ;

  cout << "Enter year :";

  cin >> year;

      if (year  %4 ==0  && year  %100!= 0)
         {

         cout<<year<< " is leapyear ";    

         }  
         
else if (year%400==0)
        {
        cout<<year<<" is Leapyear";
        }
else {
    cout  <<year<< " is Not Leapyear";      
     }
break;}                     // leap year (end)


   default :
   {
      
    cout <<endl<< "Please enter valid operator !";
     
    }

cout << endl<<endl<<endl<< "Done ! ";
getch ();

}