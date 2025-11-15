#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream variable_file;
    string user_input;
    variable_file.open("Permanent Data.txt", ios::out | ios::app);
    for (int loop = 1; loop <= 5; loop++) {
        cout << "Start writing: ";
        getline(cin, user_input);
        
        variable_file << user_input << endl;
    }
    variable_file.close();
    return 0;
}
