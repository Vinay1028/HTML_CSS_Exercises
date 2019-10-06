#include<stdio.h>
void getArray(int[],int);
void displayArray(int [],int);
int  linearSearch(int [],int,int);
int count;
int main()
{
	int arr[20],size,key;
	printf("enter the size of the array :");
	scanf("%d",&size);
	getArray(arr,size);
//	displayArray(arr,size);
	printf("\nEnter the element that you wants to search : ");
	scanf("%d",&key);
	if(linearSearch(arr, size, key) != -1)	
	{
		printf("the element is present at index %d",linearSearch(arr,size,key));
	}
	else
	printf("The element is not present in the array");
	printf("\n\ncount = %d",count);
	return 0;
}
void getArray(int arr[], int size)						/*Code to Get Array elements */
{
	int i;
	printf("Enter the array elements : ");
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}
	
}
void displayArray(int arr[], int size)				/*Code  to display Array Elemets*/
{
	int i;
	printf("The array elements are : \t");
	for(i=0; i<size; i++)
	{
		printf("%d\t",arr[i]);
	}
}
int linearSearch(int arr[],int size,int key)								/* logic of linear Search*/
{
	int i; count++;															/*count is used to check time complexity in each cases*/
	for(i=0 ; i<size ; i++)
	{
		if(arr[i]==key)
		{
		return i;
		count++;
		}
		count++;
	}
	return -1;
	count++;
}
