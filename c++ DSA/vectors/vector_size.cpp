#include<iostream>
#include<vector>
#include<conio.h>
using namespace std; 
int main()
{
  vector <int> vec;
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);

  cout << "Vector: ";
  for(int loop: vec)
     {cout << loop << " ";}
     

  cout << endl;   
  cout << "Vector size : " << vec.size() << endl;
  cout << "vector capacity : " << vec.capacity();    
  getch();
}