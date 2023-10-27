#include<stdio.h>
#include<stdlib.h>

int checkPasswordValid(char*);
int stringlen(char*);
int main()	{
	char str[100];
	printf("Enter the password: ");
	gets(str);
	
	if(checkPasswordValid(str))	{
		printf("Password is valid\n");
	}
	else
		printf("Invalid Password\n");
	return 0;
}

int checkPasswordValid(char *str)	{
	int flag=1;
	
	//length checker
	int len = stringlen(str);
	if(!(len>=8 && len<=16))
		return 0;
	
	//Uppercase checker
	int i=0,p=0;
	while(str[i] != '\0')	{
		if(str[i]>=65 && str[i]<=90)	{
			p++;
			break;
		}	
	}
	if(p==0)
		return 0;
		
	//Special Character checker
	int i=0;
	int p=0;
	while(str[i] != '\0')	{
		if(str[i]=='!' && str[i]=='@')	{
			p++;
		}	
		i++;
	}	
		
	return flag;
}
