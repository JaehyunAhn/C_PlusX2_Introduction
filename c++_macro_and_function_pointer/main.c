#include "sort.h"
#include "employee.h"

int main(int argc, char *argv[]) {
    const int no_employees = 10;
    Database people;
    init_database (people, no_employees);
    print_database(people, no_employees);
    sort((int**)people, no_employees, comp_employee, swap_employee);
    print_database(people, no_employees);
    return 0; 
}
