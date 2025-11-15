#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;

int main()
{
    // Create a basic vector
    vector<int> vec = {1,2,3,4,5}; 
    vec.push_back(23);  // Adds 23 at the end
    vec.push_back(44);  // Adds 44 at the end

    // Print vector elements
    for(int loop : vec) {
        cout << loop << ",";  
    }
    cout << endl << endl;
    
    /*
    Output:
    1,2,3,4,5,23,44,
    */

    vec.pop_back();  // Removes the last element (44) from the vector

    // Print updated vector
    for(int loop : vec) {
        cout << loop << ",";
    }
    cout << endl << endl;

    /*
    Output:
    1,2,3,4,5,23,
    */
    vec.front() = 69;
    int front_element = vec.front();  // Gets the first element (1)
    int last_element = vec.back();    // Gets the last element (23)

    
    
    cout << "front element: " << front_element << endl;  
    cout << "last element: " << last_element << endl;

    /*
    Output:
    front element: 1
    last element: 23
    */

    return 0;
}
