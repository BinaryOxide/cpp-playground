#include <iostream>
#include <conio.h>
using namespace std;
 int main()
{
  {
    cout << "</>--------- Multi-function calculator " << endl << endl ; 
    cout << "1  For multiplication-table ,            press  $ " << endl;
    cout << "2  For Plus                              press  + " << endl;
    cout << "3  For Minus                             press  - " << endl;
    cout << "4  For Multiplication                    press  * " << endl;
    cout << "5  For Division                          press  / " << endl;
    cout << "6  For leap year                         press  ! " << endl;
    cout << "7  For Prime number                      press  < " << endl;
    cout << "8  FOR reverse number                    press  > " << endl;
    cout << "9  For sum of digit                      press  : " << endl;
    cout << "10 For lcm                               press  ~ " << endl;
    cout << "11 For gcd                               press  # " << endl;
    cout << "12 For marks                             press  & " << endl;
    cout << "13 For series                            press  1 " << endl;
    cout << "14 For factorial                         press  2 " << endl;
    cout << "15 For even or odd number                press  3 " << endl;
    cout << "16 For sum of ODD  (1) number            press  4 " << endl;
    cout << "17 For sum of EVEN (2) number            press  5 " << endl;
    cout << "18 For 1 + 1/2 + 1/3 +....               press  6 " << endl;
    cout << "19 For Multiplication of number          press  7 " << endl;
    cout << "20 For Multiplication of odd number      press  8 " << endl;
    cout << "21 For Multiplication of EVEN number     press  9 " << endl;
    cout << "22 For even (2) - odd (1)                press  a " << endl;
    cout << "23 For odd (1) - even (2) )              press  b " << endl;

    // for 2 line space
    cout  <<endl<<endl;

    char op;
      cout << "select operator :";
      cin >> op;
      switch (op)
      {
case '+':                             //todo: basic calculator start


        long long int n1,n2;
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
                                           // basic calculator end
case '#':                                    //gcd (start)
{
 int num1,num2,n1,n2,rem,gcd;
 cout<< "Enter 2 number :";
 cin>> num1>>num2;
 n1=num1;
 n2=num2;
 while(n2!=0)
 {   rem=n1%n2;
        n1=n2;
           n2=rem;
 } gcd =n1;
 cout <<"GCD = " << gcd <<endl;
 cout << "Done !";
 break;}                                    //gcd (end)

case '~':                                 // lcm (start)
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
 break;}                              //lcm (end)

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
break;}                           // sum of number (end)



case '3':    //!                 start of even & odd number

{   int num3;
    cout << "for EVEN number  press 1 ";
    cout << endl; // new line
    cout << "For ODD number  press 2 ";
    cout << endl;
    cout << "select number  : ";

    cin >> num3;
    cout << endl;

if (num3 == 1 ) //?  even number start
     {
        int num1 , num2 , i;
          int sum ;
      sum = num1;
         cout << " Enter the last number : ";
            cin >> num1;
        cout << "Even number of " << num1 << " is : ";
            // cout << endl;
   for (i = 2 ; i <= num1 ; i = i+2 )
        cout << i << " " << "> ";
        cout << " Done ! ";
        break;
     }

else if (num3 == 2 )
   {
   int num1 , num2 , i;
   int dev;
   cout << " Enter the last number : ";
      cin >> num1 ;
   cout << "ODD number of " << num1 << " is : " ;

   for ( i = 1 ; i <= num1 ; i = i+2)
       cout << i << " " << ">";
       cout << " done ! ";
   break;
   }

   else
       {
    cout << "Please enter a valid number ! ";
       }
}


break;                          //! even & odd number end



case '4':        // start sum of odd number
{

int n, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

cout << "ODD number of " << n << " is : 0 " ;

    for (int i = 1; i <= n; i = i+2)
    {
        sum += i;
        if (i > n)
        {
            cout << i << " = ";
        }
        else
        {
            cout <<" + "<<  i ;
        }
    }

    cout <<"= " << sum << ".";

    break;

}         // end  sum of odd number



case '5':     // sum of even number start
{
int n, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

cout << "EVEN number of " << n << " is : 0 " ;

    for (int i = 2; i <= n; i = i+2)
    {
        sum += i;
        if (i > n)
        {
            cout << i << " = ";
        }
        else
        {
            cout <<" + "<<  i ;
        }
    }

    cout <<"= " << sum << ".";

    break;


}          // sum of even number end



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
  long long int marks;
  cin>>marks;


if (marks == 1)
{ //?     int n1,n2;
  //          cout << "Enter number : ";
  //              cin >>n1;

  //          cout<< "start from : ";
  //             cin >>n2;

  //!  int i =n2;
  //*     do{cout <<n1<<"*"<<i<<"="<<n1*i<<endl;
  // ?       i--;
  // ?          } while (i>=n1);
   long long int n1,n2,n3;
   cout<< "Enter multiplication number :";
   cin>> n1;

   cout<< "Enter multiplication times :";
   cin>> n2;

   cout<< " miltiplication ends in (1) : ";
   cin>> n3;

   long long int num =n1 ;
    long long int i = n2;
    do {
        cout << num << " x " << i << " = " << num * i << endl;
        i--;
    } while (i >=n3 );

}

       else if(marks== 0)
          { int num,n0;
             cout << "Enter any number :";
               cin >> num;

              cout << "How many times do you want to multiply ?"<<endl ;
            cout << "Enter times : "  ;
         cin >> n0;
      long long int i=1;

              while (i<=n0)
                   {
         cout << num <<" * "<< i << " = "<<num * i << endl;
          i++;
                   }

                  }
   else {cout << "Please enter valid code !";}
break;

}                                 // multiplication table end

case '6':

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

break;


}



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
   case '2':
{
 int n;
    cout << " Enter any number : ";
    cin >> n;

    int fact = 1;

    cout << "Factorial of " << n << endl << " = ";
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
        if (i != n)
        {
            cout << i << " * ";
        }
        else
        {
            cout << i << " = ";
        }
    }
    cout << fact << endl;
     break;
}


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
case '1' :             // series start
{
int i, n1 , sum = 0 ;
cout << "Enter any positive number : ";
cin >> n1;
for (i = 1 ; i <= n1 ; ++i)
  {
     sum += i;
    if (i == n1 )
       {
          cout << i << " = ";
       }
  else
      {
         cout << i << " + ";
      }
  }
  cout << sum ;
cout << sum << " .";
break;  }

case '7':      // Multiplication of number start
{

int num , mul = 1 , i;
cout << "Enter the last number : ";
cin >> num;

for (i = 1 ; i <= num ;  i++  )
    {
        mul *= i;
       if (i == num)
          {
              cout << i << " = ";
          }
       else
          {
              cout << i << " X ";
          }
    }
cout <<  mul ;

break;
}               // Multiplication of number end

case '8':       // Multiplication of odd number start

{

int num , mul = 1 , i;
cout << "Enter the last number : ";
cin >> num;

for (i = 1 ; i <= num ;  i = i+2 )
    {
        mul *= i;
       if (i == num)
          {
              cout << i << " = ";
          }
       else
          {
              cout << i << " X ";
          }
    }
cout <<  mul ;

break;
}                 // Multiplication of odd number end


case '9':          // Multiplication of EVEN number start
{

int num , mul = 1 , i;
cout << "Enter the last number : ";
cin >> num;

for (i = 2 ; i <= num ;  i = i+2  )
    {
        mul *= i;
       if (i == num)
          {
              cout << i << " = ";
          }
       else
          {
              cout << i << " X ";
          }
    }
cout <<  mul ;

break;

}                  // Multiplication of EVEN number  end


case 'a':      // start of even - odd from series

{

int num ,sum , i , even = 0 , odd = 0;
cout << "Enter the last number : ";
cin >> num;

for (i = 1 ; i <= num ; i++)
     {
        if(i % 2 == 0 )
          {
            even = even + i ;
          }
       else
          {
            odd = odd + i;
          }

     }

cout<<even<< " - "<<odd<< " = "<< even - odd ;

break;

}          // end of even - odd from series

case 'b':   // start of ODD - Even from series

{

int num ,sum , i , even = 0 , odd = 0;
cout << "Enter the last number : ";
cin >> num;

for (i = 1 ; i <= num ; i++)
     {
        if(i % 2 == 0 )
          {
                     even = even + i ;
          }
       else
          {
                     odd = odd + i;
          }

     }

cout<<odd<< " - "<<even<< " = "<< odd - even   ;

break;

}            // end of ODD - Even from series



                  // end of loop
                 // series end
 default :
   {
    {cout  <<  endl<< op << "is not valid ";}
    {cout <<  endl;}
    {cout << "Please enter valid operator !";}
   }                        // !   end of switch statement
}
  }
cout << endl<<endl<<endl<< "Done ! ";
getch ();

}



