#include<stdio.h>
#include<stdlib.h>
void display(int a[],int n)	{
	for(int i=0;i<n;i++)	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
int main()	{
	int n=10;
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	display(a,n);
	return 0;
}
