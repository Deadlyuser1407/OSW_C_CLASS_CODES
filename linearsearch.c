#include<stdio.h>

/*int linearSearch(int[],int,int);

int main()	{
	int n,key;
	printf("Enter size of the array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d elements: ",n);
	for(int i=0;i<n;i++)	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched: ");
	scanf("%d",&key);
	
	int k = linearSearch(a,n,key);
	if(k==-1)
		printf("%d does not exists in the array\n",k);
	else
		printf("Position of the element is %d\n",k);
	return 0; 
}

int linearSearch(int a[],int n,int k)	{
	for(int i=0;i<n;i++)	{
		if(a[i]==k)
		return 1;
	}
	return -1;
}*/



int search(int arr[], int N, int x)
{
	for (int i = 0; i < N; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
	int N = sizeof(arr) / sizeof(arr[0]);

	int result = search(arr, N, x);
	(result == -1)
		? printf("Element is not present in array")
		: printf("Element is present at index %d", result);
	return 0;
}

