#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char * concatenate(char * a, char * b)
{
	char * retString = malloc(strlen(a) + strlen(b) + 1);
	strcpy(retString, a);
	strcat(retString, b);
	return retString;
}

bool areRotations(char * a, char * b)
{
	char * temp = concatenate(a, a);

	if((strstr(temp, b)) != NULL) {
		
		free(temp);
		return true; 
	}		

	free(temp);
	return false;
}

int main()
{
	printf("%d\n", areRotations("AACD", "ACDA"));
	printf("%d\n", areRotations("AACD", "AADC"));

	return 0;
}
