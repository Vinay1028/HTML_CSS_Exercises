#include<stdio.h>
int main()
{
	int a[10], i;
	printf("enter the array elements :\n");
	for(i=0; i<10; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the values  you have entered are :\n");
	for(i=0; i<10; i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
