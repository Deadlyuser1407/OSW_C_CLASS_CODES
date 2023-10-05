#include <stdio.h>
#include <math.h>

int main()	{
	int i,n,d,count,sum;
	for (i=1;i<10000;i++)	{
		n = i;
		count = 0;
		while(n)	{
			n/=10;
			count++;
		}
		n=i;
		sum = 0;
		while(n)	{
			d=n%10;
			n/=10;
			sum += pow(d,count);
		}
		if(i==sum)
			printf("%d \n",i);		
	}	
	return 0;
}

