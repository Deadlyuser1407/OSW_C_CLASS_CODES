#include <stdio.h>
#include<stdlib.h>
char *stringcpy(const char*);
int main(){
	char str[100],*str2,*str3;
	printf("Enter a string : ");
	gets(str);
	printf("Entered string: %s\n",str);
	
     str2 = stringcpy(str);
	
	
	printf("Duplicated String");
	puts(str2);
	printf("\n");
	
	str[4]='p';
	printf("str :");
	puts(str);
	printf("\n");
	printf("str2 :");
	printf("\n");
	
	
return 0;
}
char *stringcpy(const char* str){
	char *str2;
	int i=0;
	while(str[i]!='\0')
		i++;
	str2	= (char*)malloc((i+1)*sizeof(char));
	i=0;
	while(str[i]){
		str2[i]=str[i];
		i++;
	}
	str2[i]='\0';
	
return str2;
}
