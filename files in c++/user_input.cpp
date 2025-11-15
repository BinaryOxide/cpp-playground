#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
  ofstream varaible_file;
  string user_input;
  varaible_file.open("input_from_user.txt");
   cout <<"start writing :" ;
   getline(cin,user_input);
   varaible_file<<user_input<<endl;
  varaible_file.close();
  return 0;
}
