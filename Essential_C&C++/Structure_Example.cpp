#include <stdio.h>

// Define the structure
struct Rectangle {
    int length;
    int breadth; // Corrected typo: "breath" to "breadth"
};

int main() {
    // Declaration of a structure variable
    struct Rectangle r;

    // Declaration + Initialization
    struct Rectangle r2 = {10, 5};

    // Assigning values to structure members
    r.length = 15;
    r.breadth = 10;

    // Accessing members and calculating area
    printf("Area of rectangle r is: %d\n", r.length * r.breadth);
    printf("Area of rectangle r2 is: %d\n", r2.length * r2.breadth);

    return 0;
}