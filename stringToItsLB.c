#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int main ()  {
	char s[100];
	int i;
	printf("\nEnter a String: ");
	gets(s,100,stdin);
	
	for(i=0;s[i]!='\0';i++)	{
		if(s[i]>='A' && s[i]<='Z')	{
			s[i]=s[i]+32;
		}
	}  
     printf("\nString in upper case = %s\n",s);
     return 0;
     }
     
