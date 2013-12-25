#include <time.h>
#include <stdio.h>

/*
   porting is the process of adapting software so that an executable program can be created for a computing environment that is different from the one for which it was originally designed (e.g. different CPU, operating system, or third party library). The term is also used when software/hardware is changed to make them usable in different environments.
*/
int main () {
	clock_t now; //unsigned long 
	struct tm * mac_time; // const long
	char *time_str;
	now = time (NULL);
	mac_time = localtime((const long *)&now); // localtime ( const long <- unsigned long)
/*
   Casting difference between:

   localtime(&(const long *)now);  << incorrect
		and
   localtime((const long *)&now);  << correct

	Answer:
		(const long *)&now takes the address of now and interprets it as an address of a const long.

		&(const long *)now interprets now as an address of a const long and takes the address of that address. This is dangerous, because you are basically converting an integer or float to a pointer without any justification as to why the memory location identified by now is accessible to your application.

   because "now" is a value, u need to convert it to pointer (using &). Then you cast this pointer to const long *
   Answer in Stack Overflow: http://goo.gl/CkHEFA
*/
	time_str = asctime(mac_time);
	printf("Now : %s\n",time_str);
	return 0;
}
