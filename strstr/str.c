/* make strstr */
#include <stdio.h>
#include <string.h> // test for strstr()
#define TRUE 1
#define FALSE 0

char *strtest( char *string1, char *string2 ) {
	// compare string1 to find string2
	// strlen able to use
	char *str1_add = string1;
	char *str2_add = string2;
	int found = FALSE;
	while(*str1_add != '\0') { // one charactor
		int i;
		for(i = 0; i < strlen(str2_add); i++) {
			if(*(str1_add+i) == *(str2_add+i)) { // address *(address+index) not (*address+index)
			}
			else
				break;
		}

		if(i == strlen(str2_add)) {
			found = TRUE;
			break;
		}
		str1_add += 1;
	}

	if(found == TRUE) {
		return str1_add;
	}
	else
		return NULL;
}

int main() {
	char str1[50] = "Pretty Girl";
	char str2[50] = "Girl";
	char *adr;

	if(adr = strstr(str1, str2)) {
		printf("found %s\n",adr);
	}
	else {
		printf ("not found\n");
	}

	printf("%s\n",strtest(str1, str2));
	printf("%s\n",str1);
	return 0;
}
