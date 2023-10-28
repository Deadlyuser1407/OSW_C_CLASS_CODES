#include<stdio.h>
#include<stdlib.h>

int function1();
int function2();

int main()	{
	int p;
	p=function1();
	printf("Fun1 in main: %d\n",p);
	p=function1();
	printf("Fun1 in main: %d\n",p);
	p=function2();
	printf("Fun2 in main: %d\n",p);
	p=function2();
	printf("Fun2 in main: %d\n",p);
	return 0;
}

int function2()	{
	static int count=50;
	count++;
	printf("Inside Fun2: %d\n",count);
	return count;
}

int function1()	{
	int count1=60;
	count1++;
	printf("Inside Fun1: %d\n",count1);
	return count1;
}
