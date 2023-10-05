#include <stdbool.h>
#include <stdio.h>

int main()	{
	int num , i , rem;
	printf("The prime numbers between 1 and 10000 is : \n");
	for(num=2;num<=10000;num++)	{
		for(i=2;i<num;i++)	{
			rem=num%i;
			if(rem!=0)	{
				continue;
			}
			else	{
				break;
			}
		}
	if(num==2 || rem!=0) 	{
		printf("%d ",num);
	}
	}
	return 0;
}
