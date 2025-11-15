#include <iostream>
#include <fstream>
#include <string>
#include <iomanip> // include this library
using namespace std;

int main() {
    ofstream variable_file;
    string name;
    int roll , sid ;
    variable_file.open("Permanent Data.txt", ios::out | ios::app);
        cout << "Enter Name : ";
         getline(cin, name);
        cout << "Enter roll : ";
        cin >> roll; 
        cout << "Enter S.I.D : ";
        cin>> sid;
        
        // Use setw() to set a specific width for each field
        variable_file << "Name :" << setw(30) << left << name;
        variable_file << "Roll : "<< setw(10) << left << roll;
        variable_file << "S.I.D : " << setw(20) << left << sid << endl;
        variable_file<<"-------------------------------------------------"<<endl;
    
    variable_file.close();
    return 0;
}
