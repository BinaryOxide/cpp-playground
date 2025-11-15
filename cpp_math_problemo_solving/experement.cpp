#include <iostream>
using namespace std;

// Function to print the main formula
void print_formula() {
    cout << "The main formula: (a+b+c)^3 = a^3 + b^3 + c^3 + 3a^2b + 3a^2c + 3ab^2 + 3b^2c + 3ac^2 + 3bc^2 + 6abc" << endl;
}

// Function to print step-by-step expansion
void print_step_by_step(int a, int b, int c, int a_square, int b_square, int c_square, int a_cube, int b_cube, int c_cube, int main_result) {
    // Step 1: Show the initial formula with values
    cout << "\nStep 1: Substitute the values of a, b, and c into the formula:" << endl;
    cout << "(a + b + c)^3 = (" << a << " + " << b << " + " << c << ")^3" << endl;

    // Step 2: Expand (a + b + c)^3
    cout << "\nStep 2: Expand (a + b + c)^3 using the formula:" << endl;
    cout << "(a + b + c)^3 = a^3 + b^3 + c^3 + 3a^2b + 3a^2c + 3ab^2 + 3b^2c + 3ac^2 + 3bc^2 + 6abc" << endl;

    // Step 3: Substitute the values into the expanded formula
    cout << "\nStep 3: Substitute the values of a, b, and c into the expanded formula:" << endl;
    cout << "= " << a << "^3 + " << b << "^3 + " << c << "^3" << endl;
    cout << "  + 3*" << a << "^2*" << b << " + 3*" << a << "^2*" << c << endl;
    cout << "  + 3*" << a << "*" << b << "^2 + 3*" << b << "^2*" << c << endl;
    cout << "  + 3*" << a << "*" << c << "^2 + 3*" << b << "*" << c << "^2" << endl;
    cout << "  + 6*" << a << "*" << b << "*" << c << endl;

    // Step 4: Calculate squares and cubes
    cout << "\nStep 4: Calculate the squares and cubes:" << endl;
    cout << "= " << a_cube << " + " << b_cube << " + " << c_cube << endl;
    cout << "  + 3*" << a_square << "*" << b << " + 3*" << a_square << "*" << c << endl;
    cout << "  + 3*" << a << "*" << b_square << " + 3*" << b_square << "*" << c << endl;
    cout << "  + 3*" << a << "*" << c_square << " + 3*" << b << "*" << c_square << endl;
    cout << "  + 6*" << a << "*" << b << "*" << c << endl;

    // Step 5: Calculate intermediate results
    cout << "\nStep 5: Calculate the intermediate results:" << endl;
    cout << "= " << a_cube << " + " << b_cube << " + " << c_cube << endl;
    cout << "  + " << 3 * a_square * b << " + " << 3 * a_square * c << endl;
    cout << "  + " << 3 * a * b_square << " + " << 3 * b_square * c << endl;
    cout << "  + " << 3 * a * c_square << " + " << 3 * b * c_square << endl;
    cout << "  + " << 6 * a * b * c << endl;

    // Step 6: Sum all the terms
    cout << "\nStep 6: Sum all the terms:" << endl;
    cout << "= " << a_cube + b_cube + c_cube << endl;
    cout << "  + " << 3 * a_square * b + 3 * a_square * c << endl;
    cout << "  + " << 3 * a * b_square + 3 * b_square * c << endl;
    cout << "  + " << 3 * a * c_square + 3 * b * c_square << endl;
    cout << "  + " << 6 * a * b * c << endl;

    // Step 7: Show the final result
    cout << "\nStep 7: Final result:" << endl;
    cout << "(a + b + c)^3 = " << main_result << endl;
}

int main() {
    int a, b, c;

    // Ask user for the value of a, b, c
    cout << "Enter the values of a, b, c: ";
    cin >> a >> b >> c;

    // Calculate squares and cubes
    int a_square = a * a;
    int b_square = b * b;
    int c_square = c * c;
    int a_cube = a_square * a;
    int b_cube = b_square * b;
    int c_cube = c_square * c;

    // Calculate the main result
    int main_result = (a + b + c) * (a + b + c) * (a + b + c);

    // Print the formula
    print_formula();

    // Print the step-by-step process
    print_step_by_step(a, b, c, a_square, b_square, c_square, a_cube, b_cube, c_cube, main_result);

    return 0;
}