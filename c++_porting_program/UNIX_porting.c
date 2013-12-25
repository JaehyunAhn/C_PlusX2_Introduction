#include <time.h>
#include <stdio.h>

int main () {
	clock_t now;
	struct tm * mac_time;
	char *time_str;
	now = time (NULL);
	mac_time = localtime(&now);
	time_str = asctime(mac_time);
	printf("Now : %s\n",time_str);
	return 0;
}
