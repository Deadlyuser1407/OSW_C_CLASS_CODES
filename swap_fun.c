#include<stdio.h>

void swap1(int, int);
int main()	{
	int a=5, b=10;
	
	printf("Main: before swap1 a=%d, b=%d \n",a,b);
	swap1(a,b);
	printf("Main: after swap1 a=%d, b=%d \n",a,b);
	
}

void swap1(int a, int b)	{
	int temp = a;
	a=b;
	b=temp;
	printf("Swap1: after swap a=%d, b=%d \n",a,b);
}
