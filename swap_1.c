#include<stdio.h>

void swap1(int,int);
void swap2(int*,int*);
int main()	{
	int a=5, b=10;
	
	printf("Main: before swap1 a=%d, b=%d\n",a,b);
	swap1(a,b);
	printf("Main: after swap1 a=%d, b=%d\n",a,b);
	swap2(&a,&b);
	printf("Main: after swap2 a=%d, b=%d\n",a,b);
	
}

void swap1(int a, int b)	{
	int temp = a;
	a=b;
	b=temp;
	printf("Swap1: after swap a=%d, b=%d\n",a,b);
}
void swap2(int*a, int*b)	{
	int*temp = a;
	a=b;
	b=temp;
	printf("Swap2: after swap a=%d, b=%d\n",*a,*b);
}
