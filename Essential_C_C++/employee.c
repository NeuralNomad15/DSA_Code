#include <stdio.h>

struct Employee {
    int emp_id;
    char name[50];
    float salary;
    char department[30];
};

int main() {
    // Declaration + Initialization
    struct Employee emp1 = {101, "Priya", 50000.0, "HR"};

    // Modifying a member
    emp1.salary = 55000.0;

    // Printing details
    printf("Employee ID: %d\n", emp1.emp_id);
    printf("Name: %s\n", emp1.name);
    printf("Salary: ₹%.2f\n", emp1.salary);
    printf("Department: %s\n", emp1.department);

    return 0;
}