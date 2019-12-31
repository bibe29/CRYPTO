#include<stdio.h>
int main()
{
	int i,n,sum=0,ave;
	printf("enter the number n: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter number: ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d \n",a[i]);
		sum=sum+a[i];
		
		
	}
	printf("sum is %d",sum);
	ave=sum/n;
	printf("average is %d",ave);
	return 0;
	
}
