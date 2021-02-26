#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//There was a bug in here
//In python: -9 mod 26 == 17
//In C: -9 mod 26 == -9
//It must be corrected since it corrupts the output
//To achieve the same % like in Python: ((n % M) + M) % M
//https://stackoverflow.com/questions/1907565/c-and-python-different-behaviour-of-the-modulo-operation

char * caesarDecipher(char * str, int shift)
{
	int i = 0;
	char * p = str;
	char * dst = (char*) malloc((strlen(str) + 1) * sizeof(char));
	
	if(shift > 26)
		shift = shift % 26;
	
	while( *p != '\0')
	{
		if(isupper(*p))
			dst[i] = ((((*p - shift) - 65) % 26) + 26) % 26 + 65;
			//BAD: dst[i] = ((*p - shift) - 65) % 26 + 65;
		else if(islower(*p))
			dst[i] = ((((*p - shift) - 97) % 26) + 26) % 26 + 97;
			//BAD: dst[i] = ((*p - shift) - 97) % 26 + 97;		
		else
			dst[i] = *p - shift;
		p++;
		i++;
	}	
	return dst;
}

char * caesarCipher(char * str, int shift)
{
	int i = 0;
	char * p = str;
	char * dst = (char*) malloc((strlen(str) + 1) * sizeof(char));
 	
	if(shift > 26)
		shift = shift % 26;

	while( *p != '\0')
	{
		if(isupper(*p))
			dst[i] = ((((*p + shift) - 65) % 26) + 26) % 26 + 65;
			//BAD: dst[i] = (*p + shift - 65) % 26 + 65;
		else if(islower(*p))
			dst[i] = ((((*p + shift) - 97) % 26) + 26) % 26 + 97;
			//BAD: dst[i] = (*p + shift - 97) % 26 + 97;		
		else
			dst[i] = *p + shift;
		p++;
		i++;
	}	
	return dst;
}

int main()
{
	char * txt = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
	
	char * rcCiph = caesarCipher(txt, 3);
	printf("%s\n", rcCiph);
	char * rcDeciph = caesarDecipher(rcCiph, 3);
	printf("%s\n", rcDeciph);
	
	puts("");	
	puts("And another one:");
	char * rcCiphNew = caesarCipher(txt, 35);
	printf("%s\n", rcCiphNew);
	char * rcDeciphNew = caesarDecipher(rcCiphNew, 35);
	printf("%s\n", rcDeciphNew);

	free(rcCiph);
	free(rcDeciph);	
	free(rcCiphNew);
	free(rcDeciphNew);
	
	return 0;
}
