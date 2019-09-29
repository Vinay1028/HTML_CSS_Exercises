// finding the smallest and largest element in an array
#include<stdio.h>
int main()				
{
	int arr[10]={2,5,4,1,8,9,11,6,3,7};		//array declaration and initialization
	int i;
	int small, large;
	small = large = arr[0];
	for(i=0; i<10; i++)						//logic to find smallest and largest starts from here
	{
		if(arr[i]<small)
			small = arr[i];
		if(arr[i]>large)
			large = arr[i];
	}										//ends here
	printf("The small element is = %d \n And the large element is = %d",small,large);		//displaying the result
	return 0;
}
