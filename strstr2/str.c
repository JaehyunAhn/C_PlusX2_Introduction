#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0

char *strfunction(char *string1, char *string2) {
	char *point = NULL; // save orignal address
	char *str2_origin = string2;
	int flag = FALSE;
	int start = TRUE;

	while(*string1 != '\0') {
		while(*string1 == *string2) {
			if(start) {
				point = string1;
				start = FALSE;
			}
			string1++;
			string2++;
			if(*string2 == '\0') {
				flag = TRUE;
			}
		}
		start = TRUE;
		string1++;
	}

	if(!flag)
		point = NULL;
	
	return point;
}

int main () {
	char *str1 = "Mad Cloud";
	char *str2 = "Cloud";
	char *str3;

	str3 = strstr(str1, str2);
	printf("Original string is \'%s\'\n"
			"Objective String is \'%s\'\n"
			"This is str str function: \'%s\'\n",
			str1,
			str2,
			str3);

	// customized function
	str3 = NULL;
	printf("\n");

	str3 = strfunction(str1, str2);
	printf("Original is \'%s'\n",str1);
	printf("result is \'%s\'\n",str3);

	return 0;
}
