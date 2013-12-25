#include <time.h>
#include <stdio.h>

int main () {
	clock_t now; //unsigned long 
	struct tm * mac_time; // const long
	char *time_str;
	now = time (NULL);
	mac_time = localtime((const long *)&now); // localtime ( const long <- unsigned long)
	time_str = asctime(mac_time);
	printf("Now : %s\n",time_str);
	return 0;
}
