#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * caesarDecipher(char * str)
{
	int i = 0;
	char * p = str;
	char * dst = (char*) malloc((strlen(str) + 1) * sizeof(char));
	
	while( *p != '\0')
	{
		dst[i] = *p - 3;
		p++;
		i++;
	}	
	return dst;
}

char * caesarCipher(char * str)
{
	int i = 0;
	char * p = str;
	char * dst = (char*) malloc((strlen(str) + 1) * sizeof(char));
	
	while( *p != '\0')
	{
		dst[i] = *p + 3;
		p++;
		i++;
	}	
	return dst;
}

int main()
{
	char * txt = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
	char * rcCiph = caesarCipher(txt);
	printf("%s\n", rcCiph);
	char * rcDeciph = caesarDecipher(rcCiph);
	printf("%s\n", rcDeciph);
	
	free(rcCiph);
	free(rcDeciph);
	return 0;
}
