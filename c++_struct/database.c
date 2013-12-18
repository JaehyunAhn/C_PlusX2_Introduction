#include <stdio.h>
#include <string.h>

// Question on: http://stackoverflow.com/questions/20648368/bus-error-in-c-struct

typedef struct emp_struct {
    char name[100]; // pointer type will throw out error : Bus error: 10
    int employee_no;
    float salary,
          tax_to_date;
} Employee;

typedef Employee Database[10];

Database people = {
    {"Fred", 10, 10000, 3000},
    {"Jim", 9, 12000, 3100.5},
    {"Fred", 13, 1000000, 30},
    {"Mary", 11, 170000, 4000},
    {"Judith", 45, 130000, 50000},
    {"Nigel", 10, 5000, 1200},
    {"Trevor", 10, 20000, 6000},
    {"Karen", 10, 120000, 34000},
    {"Marianne", 10, 50000, 12000},
    {"Mildred", 10, 100000, 30000}
};

int main () {
    // array act like pointer, thus pointing + pointing = ERROR
    printf("people[1]->name: ERROR\n");
    // jump its memory amount of struct size
    printf("(people+1)->name:%s\n",(people+1)->name);
    // array works as a pointer
    printf("people[3].name:%s\n",people[3].name);

    /* Is it possible to assign struct to struct? */
    printf("\nAssigning struct to struct\n");
    Employee temp;
    temp = *(people+5); // Nigel Record
    printf("Name: %s\n",temp.name);
    // exchange
    strcpy(temp.name, "Ahn");
    printf("Changed: %s\n",temp.name);
    printf("Original: %s\n",people[5].name);

    printf("\nCopied_field:%d\n",temp.employee_no);
    printf("Original_field:%d\n",people[5].employee_no);

    return 0;
}
