#include<stdio.h>
void bill(int,int*,int*,int*,int*,int*,int*,int*,int*,int*);
int main()	{
	int amount=2005; 
	int a, b, c, d, e, f, g, h, i;
	
	calculate(a,b,&add,&sub,&mul,&div);
	printf("Sum of a=%d and b=%d is %d \n",a,b,add);
	printf("Difference between a=%d and b=%d is %d \n",a,b,sub);
	printf("Product of a=%d and b=%d is %d \n",a,b,mul);
	printf("Division of a=%d and b=%d is %f \n",a,b,div);
	return 0;
}
void calculate(int a, int b, int* add, int* sub, int* mul, double* div)	{
	*add=a+b;
	*sub=a-b;
	*mul=a*b;
	*div=(double)a/b;
}
