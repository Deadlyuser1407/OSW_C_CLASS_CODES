#include<stdio.h>
int main()	{
	int a[10],sum=0;
	float avg;
	printf("Entr the array");
	for(int i = 0;i<10;i++)	{
		scanf("%d",&a[i]);
				
	}
	for(int i=0;i<10;i++)	{
		sum += a[i];
		avg = (float)sum/10;
	}
	printf("sum: %d\n",sum);
	printf("avg: %f\n",avg);
return 0;
}

