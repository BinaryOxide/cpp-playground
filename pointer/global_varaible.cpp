#include<iostream>
#include<conio.h>
using namespace std;
int total;
int sum_of_square(int number_1 ,int number_2){
  int result = (number_1 + number_2);
  total = result ;
  cout <<"total  = " << total << endl;
  cout <<"result = " << result << endl;
  return result;
}
int main(){

 int number_1 = 1 , number_2 = 2;
 total = sum_of_square(number_1 , number_2);

 cout << "addition = " << total;


getch();
}
















