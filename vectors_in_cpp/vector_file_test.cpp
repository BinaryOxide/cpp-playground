#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
void print_vector(const vector<float> &passed_vector)
     {
      for(float value: passed_vector)
         {
          cout<< value << " ";
         }
     }


int main(){
  vector<float> variable_vector = {2.3,45.5,65.65,56.4,4.5};
  for(float loop:variable_vector)
     {
      cout <<loop<<" ";
     }
     cout<< endl;
     print_vector(variable_vector); 
     getch();
}