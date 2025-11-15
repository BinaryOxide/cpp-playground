#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
int main()
{
 vector<int> vec_var = {2,3,4};
 cout<< vec_var[0] << endl;
 cout<< vec_var[1] << endl;
 
 cout << endl;//------------------//
 
 vector<int> vec2(4,77);
 cout<< vec2[0] << endl;
 cout<< vec2[1] << endl;
 cout<< vec2[2] << endl;
 cout<< vec2[3] << endl;
 cout<< vec2[4] << endl;

 vector<int> vec3(7, 82);
 for(int loop :vec3)
    {
      cout << loop << ",";
    }  

cout << endl << endl;

 vector<char> vec4{'a','b','c','d','e','f'};
  for(char loop1 : vec4)
     {
       cout << loop1 << ",";
     }
        
         
        
  
  getch();
}



