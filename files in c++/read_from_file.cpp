#include<iostream>
#include<string>
#include<conio.h>
#include<fstream>
using namespace std; // adds the std namespace to the current scope

int main(){
   string line ; // declares a string variable named line
   ifstream file("Permanent Data.txt"); // creates a file input stream object named file and opens the file "Permanent Data.txt"
   getline(file,line); // reads the first line of the file and stores it in the line variable
   while(getline(file,line)){ // reads the remaining lines of the file and stores them in the line variable
    cout << line << endl; // prints the current line followed by a newline character
   }
   file.close(); // closes the file
  getch(); // pauses the console output until a key is pressed
}