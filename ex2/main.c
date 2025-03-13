#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    double salary;
} employee_t;

void emp_info(employee_t emp) {
    printf("Name: %s, Age: %d, Salary: %.2f\n", emp.name, emp.age, emp.salary);
}

int emp_aveage_age(employee_t emp[], int n) {
    int total_age = 0;
    for (int i = 0; i < n; i++) {
        total_age += emp[i].age;
    }
    return (n > 0) ? total_age / n : 0;
}

void emp_writefile(employee_t emp[], int n) {
    FILE *file = fopen("employ.bin", "wb");
    if (!file) {
        perror("Failed to open file");
        return;
    }
    fwrite(emp, sizeof(employee_t), n, file);
    fclose(file);
}

void emp_readfile(employee_t emp[], int n) {
    FILE *file = fopen("employ.bin", "rb");
    if (!file) {
        perror("Failed to open file");
        return;
    }
    fread(emp, sizeof(employee_t), n, file);
    fclose(file);
}

int main() {
    employee_t employees[3] = {
        {"Alice", 30, 50000.0},
        {"Bob", 25, 60000.0},
        {"Charlie", 35, 55000.0}
    };
    
    int n = 3;
    emp_writefile(employees, n);
    
    employee_t employees_read[3];
    emp_readfile(employees_read, n);
    
    for (int i = 0; i < n; i++) {
        emp_info(employees_read[i]);
    }
    
    printf("Average Age: %d\n", emp_aveage_age(employees_read, n));
    
    return 0;
}
