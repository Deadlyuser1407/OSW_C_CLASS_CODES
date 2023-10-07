#include<stdio.h>
int subArray1(int*, int , int, int**);
int* subArray2(int*, int , int, int*);
void swap2(int*,int*);
void swap3(int*);
int main()	{
	int n = 15;
	int a[15]={10,20,30,40,50,60,70,80,90,100,110,120,130,140,150};
	int *b;
	int m,k = 35;
	
	m = subArray1(a, n, k, &b);
	//b = subArray2(a, n, k, &m);
	
	for(int i=0;i<m;i++)	
		printf("%d ",b[i]);
		printf("\n");
	return 0;
}

int subArray1(int* a, int n, int k, int** b)	{
	for(int i=0;i<n;i++)	{
		if(a[i]>k)	{
			*b=&a[i];
			return (n-i);
		}
	}
		return 0;
	}

int* subArray2(int* a, int n, int k, int* m)	{
	for(int i=0;i<n;i++)	{
		if(a[i]>k)	{
			*m=n-i;
			return &a[i];
		}
	}
		return &a[n];
	}


