#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 1. Create a vector and initialize it
    vector<int> vec = {10, 20, 30, 40, 50};
    cout << "Initial vector: ";
    for (int num : vec) cout << num << " ";
    cout << endl;

    // 2. size() - Get number of elements
    cout << "Size of vector: " << vec.size() << endl;

    // 3. push_back() - Add elements at the end
    vec.push_back(60);
    vec.push_back(70);
    cout << "After push_back(60) and push_back(70): ";
    for (int num : vec) cout << num << " ";
    cout << endl;

    // 4. pop_back() - Remove last element
    vec.pop_back();
    cout << "After pop_back(): ";
    for (int num : vec) cout << num << " ";
    cout << endl;

    // 5. front() - Get first element
    cout << "Front element: " << vec.front() << endl;

    // 6. back() - Get last element
    cout << "Last element: " << vec.back() << endl;

    // 7. at() - Access an element safely
    cout << "Element at index 2: " << vec.at(2) << endl;

    // 8. operator[] - Access an element without bounds checking
    cout << "Element at index 3 using []: " << vec[3] << endl;

    // 9. insert() - Insert an element at index 2
    vec.insert(vec.begin() + 2, 25);
    cout << "After insert(25) at index 2: ";
    for (int num : vec) cout << num << " ";
    cout << endl;

    // 10. erase() - Remove element at index 3
    vec.erase(vec.begin() + 3);
    cout << "After erase at index 3: ";
    for (int num : vec) cout << num << " ";
    cout << endl;

    // 11. resize() - Change size of vector
    vec.resize(4);
    cout << "After resize(4): ";
    for (int num : vec) cout << num << " ";
    cout << endl;

    // 12. swap() - Swap two vectors
    vector<int> anotherVec = {100, 200, 300};
    vec.swap(anotherVec);
    cout << "After swap with anotherVec: ";
    for (int num : vec) cout << num << " ";
    cout << endl;

    // 13. clear() - Remove all elements
    vec.clear();
    cout << "After clear(), size of vector: " << vec.size() << endl;

    // 14. empty() - Check if vector is empty
    cout << "Is vector empty? " << (vec.empty() ? "Yes" : "No") << endl;

    return 0;
}
