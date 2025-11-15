#include <iostream>
#include <conio.h> // For getch() function
using namespace std;

// Create a superclass called class_shape
class class_shape {
public:
    // Create two main variables to store dimensions
    double dimension_1, dimension_2;

    // Add a parameterized constructor
    class_shape(double dimension_1, double dimension_2) {
        this->dimension_1 = dimension_1;
        this->dimension_2 = dimension_2;
    }

    // Define a virtual function for calculating area (used as a template)
    virtual double area() {
        return 0; // Default implementation (to be overridden by subclasses)
    }
};

// Create a subclass called class_triangle, inheriting from class_shape
class class_triangle : public class_shape {
public:
    // Automatically inherit dimension_1, dimension_2, and shape from the superclass
    class_triangle(double dimension_1, double dimension_2)
    : class_shape(dimension_1, dimension_2) {
        // No additional constructor logic needed
    }

    // Override the area() function for triangles
    double area() {
        return 0.5 * dimension_1 * dimension_2; // Calculate triangle area
    }
};

// Create another subclass called class_rectangle, also inheriting from class_shape
class class_rectangle : public class_shape {
public:
    // Automatically inherit dimension_1, dimension_2, and shape from the superclass
    class_rectangle(double dimension_1, double dimension_2)
        : class_shape(dimension_1, dimension_2) {
        // No additional constructor logic needed
    }

    // Override the area() function for rectangles
    double area() {
        return dimension_1 * dimension_2; // Calculate rectangle area
    }
};

int main() {
    // Create a pointer to the superclass (class_shape)
    class_shape* pointer;

    // Create instances of the subclasses (triangle and rectangle)
    class_triangle variable_triangle(10, 20);
    class_rectangle variable_rectangle(10, 20);

    // Point the pointer to the triangle object and calculate its area
    pointer = &variable_triangle;
    cout << "Triangle area: " << pointer->area() << endl;

    // Point the pointer to the rectangle object and calculate its area
    pointer = &variable_rectangle;
    cout << "Rectangle area: " << pointer->area() << endl;

    getch(); // Wait for a key press before exiting
}

/*
n summary:

We define a superclass called class_shape with two main variables (dimension_1 and dimension_2) and a virtual function area().
Two subclasses, class_triangle and class_rectangle, inherit from class_shape.
Each subclass overrides the area() function to calculate the area specific to triangles and rectangles.
In the main() function, we demonstrate polymorphism by using a pointer to the superclass to access the area calculation for both triangle and rectangle objects.
*/