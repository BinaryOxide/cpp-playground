#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Initialize a vector with some values
    vector<int> vec = {1, 2, 3, 4, 5};
    
    // Adding elements to the vector
    vec.push_back(23);
    vec.push_back(44);
    
    // Display vector elements after push_back operations
    cout << "Vector after push_back operations: ";
    for (const int &element : vec) {
        cout << element << ", ";
    }
    cout << "\n\n";
    
    /* Output after push_back operations:
       Vector after push_back operations: 1, 2, 3, 4, 5, 23, 44,
    */
    
    // Removing the last element from the vector
    if (!vec.empty()) {
        vec.pop_back(); // Removes last element (44)
    }
    
    // Display vector elements after pop_back operation
    cout << "Vector after pop_back operation: ";
    for (const int &element : vec) {
        cout << element << ", ";
    }
    cout << "\n\n";
    
    /* Output after pop_back operation:
       Vector after pop_back operation: 1, 2, 3, 4, 5, 23,
    */
    
    // Accessing and displaying the front and back elements safely
    if (!vec.empty()) {
        cout << "Front element: " << vec.front() << endl;
        cout << "Last element: " << vec.back() << endl;
    } else {
        cout << "Vector is empty, no front or last element to display." << endl;
    }
    
    /* Output for front and last elements:
       Front element: 1
       Last element: 23
    */
    
    return 0;
}
