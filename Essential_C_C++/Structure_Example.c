struct Rectangle {
    int length;
    int breadth;
};

int main() {
    // Declaration
    struct Rectangle r;
    

    // Modifying members
    r.length = 15;
    r.breadth = 10;
    
    // Accessing members
    printf("Area of rectangle is %d", r.length * r.breadth);
}