#include <vector>
#include <iostream>

void vector_functions_demo() {
    std::vector<int> v;
    std::vector<int> other = {1, 2, 3};

    //! <--------------- Capacity Operations ---------------->
    v.size();          // Returns current element count
    v.empty();         // Returns true if vector is empty
    v.capacity();      // Returns allocated storage capacity
    
    // <--------------- Size Modification ----------------->
    v.resize(10);      // Resize to 10 elements (default init)
    v.reserve(100);    // Pre-allocate space for 100 elements
    v.shrink_to_fit(); // Reduce capacity to match size
    
    //! <--------------- Element Addition ------------------>
    v.push_back(5);    // Add element to end (copy)
    v.emplace_back(7); // Construct element in-place at end
    v.insert(v.begin() + 2, 10);  // Insert at position
    v.emplace(v.begin(), 100);    // Construct in-place at pos
    
    //! <--------------- Element Removal ------------------->
    v.pop_back();      // Remove last element
    v.erase(v.begin() + 1);       // Remove at position
    v.clear();         // Remove all elements
    
    //! <--------------- Element Access -------------------->
    v.front();         // Access first element (unchecked)
    v.back();          // Access last element (unchecked)
    v.at(3);          // Safe access with bounds checking
    v[2];             // Unsafe direct access
    v.data();         // Get raw pointer to underlying array
    
    //! <--------------- Vector Assignment ----------------->
    v.assign(5, 42);   // Replace with 5 copies of 42
    v.assign(other.begin(), other.end()); // Copy range
    
    //! <--------------- Content Exchange ------------------>
    std::vector<int> v2;
    v.swap(v2);       // Fast content swap (O(1) operation)
    
    //! <--------------- Forward Iterators ----------------->
    auto begin_it = v.begin();    // Iterator to first element
    auto end_it = v.end();        // Iterator to end marker
    for(auto it = begin_it; it != end_it; ++it) {
        std::cout << *it << " ";
    }
    
    //! <--------------- Reverse Iterators ----------------->
    auto rbegin_it = v.rbegin();  // Reverse iterator
    auto rend_it = v.rend();
    for(auto rit = rbegin_it; rit != rend_it; ++rit) {
        std::cout << *rit << " ";
    }
    
    //! <--------------- Const Iterators ------------------->
    auto cbegin_it = v.cbegin();  // Const forward
    auto cend_it = v.cend();
    auto crbegin_it = v.crbegin(); // Const reverse
    auto crend_it = v.crend();
}

int main() {
    vector_functions_demo();
    return 0;
}