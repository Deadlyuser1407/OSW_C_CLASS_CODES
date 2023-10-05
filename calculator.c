#include<stdio.h>
void calculate(int,int,int*,int*,int*,double*);
int main()	{
	int a=15, b=6; 
	int add, sub, mul;
	double div;
	
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
