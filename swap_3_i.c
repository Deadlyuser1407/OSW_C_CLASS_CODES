#include<stdio.h>

void swap1(int,int);
void swap2(int*,int*);
void swap3(int*);
int main()	{
	int a=5, b=10;
	int array[2]={a,b};
	printf("Main: before swap1 a=%d, b=%d\n",a,b);
	swap1(a,b);
	printf("Main: after swap1 a=%d, b=%d\n",a,b);
	swap2(&a,&b);
	printf("Main: after swap2 a=%d, b=%d\n",a,b);
	printf("&array[0]=%p\n",array);
	printf("&array[1]=%p\n",array+1);
	printf("&array[1]=%d\n",array[1]);
	swap3(array); //call by address
	swap3(&array[0]);
	printf("Main: after swap3 a=%d, b=%d\n",array[0],array[1]);
	
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
void swap3(int *array)	{
	int temp = array[0];
	array[0]=array[1];
	array[1]=temp;
	printf("Swap3: after swap a=%d, b=%d\n",array[0],array[1]);
}
