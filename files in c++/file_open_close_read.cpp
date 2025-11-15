#include <iostream>
#include <fstream>
#include <string>
#include <iomanip> // Include this library for setw() function
#include <conio.h> // Include this library for getch() function
using namespace std;

int main() {
    ofstream input_file;
    string name;
    int roll, sid;

    // Open a file named "Permanent Data.txt" for writing (append mode)
    input_file.open("Permanent Data.txt", ios::out | ios::app);

    // Prompt the user for input
    cout << "Enter Name: ";
    getline(cin, name); // Read the entire line (including spaces)
    cout << "Enter roll: ";
    cin >> roll;
    cout << "Enter S.I.D: ";
    cin >> sid;

    // Write data to the file with specific formatting
    input_file << "Name: " << setw(30) << left << name;
    input_file << "Roll: " << setw(10) << left << roll;
    input_file << "S.I.D: " << setw(20) << left << sid << endl;
    input_file << "-------------------------------------------------" << endl;

    // Read and display data from the file line by line
    string line_by_line;
    ifstream open_file("Permanent Data.txt"); // Open the file for reading
    getline(open_file, line_by_line); // Read the first line
    while (getline(open_file, line_by_line)) { // Read subsequent lines
        cout << line_by_line << endl; // Print each line
    }

    // Close the file
    input_file.close();

    // Wait for user input (press any key to continue)
    getch();
}

