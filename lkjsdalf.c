
#include <stdio.h>

#define N 100 // Maximum number of employees

struct Employee {
    char name[50];
    char gender;
    float salary;
};

int n = 0; // Number of employees
struct Employee employees[N];

void takeEmployeesInfoFromKeyboard() {
    if (n >= N) {
        printf("Maximum number of employees reached.\n");
        return;
    }

    printf("Enter employee name: ");
    scanf("%s", employees[n].name);

    printf("Enter employee gender (M/F): ");
    scanf(" %c", &employees[n].gender);

    printf("Enter employee salary: ");
    scanf("%f", &employees[n].salary);

    n++; // Increment the employee count
}

void findEmployeeWithHighestSalary() {
    if (n == 0) {
        printf("No employees.\n");
        return;
    }

    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (employees[i].salary > employees[maxIndex].salary) {
            maxIndex = i;
        }
    }

    printf("Employee with the highest salary:\n");
    printf("Name: %s\n", employees[maxIndex].name);
    printf("Gender: %c\n", employees[maxIndex].gender);
    printf("Salary: %.2f\n", employees[maxIndex].salary);
}

void displayAllEmployeesInfo() {
    if (n == 0) {
        printf("No employees.\n");
        return;
    }

    float halfMaxSalary = employees[0].salary / 2.0;

    printf("Employees with salary less than half of the highest salary:\n");
    printf("Employee Name\tEmployee Gender\tSalary\n");

    for (int i = 0; i < n; i++) {
        if (employees[i].salary < halfMaxSalary) {
            printf("%s\t\t%c\t\t%.2f\n", employees[i].name, employees[i].gender, employees[i].salary);
        }
    }
}

void displayMenu() {
    printf("======= Office Pay Roll System ========\n");
    printf("• Enter 'x', to take information of one employee into the Employee structure array of size N.\n");
    printf("• Enter 'y', to find and display the info of employee with the highest salary.\n");
    printf("• Enter 'z', to display the information of employees with less than half of the highest salary in tabular format.\n");
    printf("• Enter 'q', quit/exit the menu system.\n");
    printf("• For any other input, display \"Invalid Input\"\n");
}

int main() {
    char choice;

    while (1) {
        displayMenu();
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'x':
                takeEmployeesInfoFromKeyboard();
                break;
            case 'y':
                findEmployeeWithHighestSalary();
                break;
            case 'z':
                displayAllEmployeesInfo();
                break;
            case 'q':
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid Input\n");
        }
    }

    return 0;
}
