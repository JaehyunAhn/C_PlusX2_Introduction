#include "sorts.h"
#include "employee.h"

int comp_employee (int *database[], int i, int j)
{
    return 0;
}

void swap_employee (int *data[], int i, int j)
{
}

void init_database( Database employees, int no_employees )
{
}

void print_database ( Database people, int no_employees)
{
}

void sort (int *data[], int n, comp_ptr compare, swap_ptr swap)
{
}

int main(int argc, char *argv[]) {
    const int no_employees = 10;
    Database people;
    init_database (people, no_employees);
    print_database(people, no_employees);
    sort((int**)people, no_employees, comp_employee, swap_employee);
    print_database(people, no_employees);
    return 0; 
}
