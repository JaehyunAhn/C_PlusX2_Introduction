/* file employee.h */

#ifndef employee_h
#define employee_h

typedef struct emp_struct {
    char name[100];
    int employee_no;
    float salary, tax_to_date;
} Employee;

typedef Employee *Database[10];

int comp_employee (int *database[], int i, int j);
void swap_employee (int *data[], int i, int j);

/* read in database (for this exercise fake it) */
void init_database( Database employees, int no_employees );

/* print out the database */
void print_database ( Database people, int no_employees);

#endif /* employee_h */
