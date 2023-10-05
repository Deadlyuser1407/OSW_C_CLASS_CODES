#include <stdio.h>

int sumOfTwoNumber(int,int);
int main()	{
	int res,a,b;
	a = 15;
	b = 60;
	res = sumOfTwoNumber(a,b);
	printf("%d + %d is %d\n",a,b,res);
	return 0;
}
int sumOfTwoNumber(int a, int b)	{
	a = a+15;
	b = b+15;
	int c = a+b;
	printf("%d + %d is %d\n",a,b,c);
	return c;
}	

