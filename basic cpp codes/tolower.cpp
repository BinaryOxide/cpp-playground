#include<iostream>
#include<cctype>
#include<conio.h>

using namespace std;
char main()
{
   char ch;
   cout<< "Enter any caracter :";
   cin>>ch;
   ch = tolower(ch);

   cout << ch;
 
   getch();

}