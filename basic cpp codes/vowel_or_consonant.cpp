#include<iostream>
#include<conio.h>

using namespace std;

int main()
{ char ch;
  cout<< "Enter any character :";
  cin>>ch;
  if (  ch=='a'                  || ch=='A' 
     || ch=='e'                  || ch=='E'
     || ch=='i'                  || ch=='I'
     || ch=='o'                  || ch=='O'
     || ch=='u'                  || ch=='U')
  {cout<<"vowel";}

  else  {cout<<"consonant";}


  getch();
}