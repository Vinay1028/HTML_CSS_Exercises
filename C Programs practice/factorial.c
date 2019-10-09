#include<stdio.h>
int main()
{
	int num,fact=1,i;				//declaration of the variables
	printf("enter a number :");
	scanf("%d",&num);
	if(num==0)						//condition if the number is 0
	{
		printf("factorial of %d is %d",num,1);
	}
	for(i=num; i>1; i--)			//iteration to get factorial
	{
		fact *=i;
	}
	printf("factorial of %d is %d",num,fact);	//printing the final output to the console
	return 0;
}
