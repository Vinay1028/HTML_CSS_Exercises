#include<stdio.h>
int main()
{
	int num,i;
	printf("enter a number : ");
	scanf("%d",&num);
	for(i=2; i<num; i++)
	{
		if(num%i==0)
		break;
	}
	if(num==i)
		printf("the number is a prime number");
	else
		printf("the number is not a prime number");
	return 0;
}
