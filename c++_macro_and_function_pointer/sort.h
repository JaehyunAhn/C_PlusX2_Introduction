/* file sort.h */

#ifndef sort_h
#define sort_h
typedef int (*comp_ptr) (int *data[], int s, int t);
typedef void(*swap_ptr) (int *data[], int s, int t);

void sort (int *data[], int n, comp_ptr compare, swap_ptr swap);

#endif /* sort.h */
