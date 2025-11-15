#include<iostream>
#include<fstream>
using namespace std;
int main() {
  ofstream varaible_file;
  varaible_file.open("new_file.cpp");

  varaible_file.close();
  return 0;
}