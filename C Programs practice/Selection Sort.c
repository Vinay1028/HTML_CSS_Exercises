#include<stdio.h>
void getArray(int [],int);
void displayArray(int [],int);
void selectionSort(int [],int);
int count;
int main()
{
	int arr[20],size;
	printf("Enter the size of the array : ");
	scanf("%d",&size);
	getArray(arr,size);
	selectionSort(arr,size);
	displayArray(arr,size);
	printf("count = %d",count);
	return 0;
	
}
void getArray(int arr[], int size)						/*Code to Get Array elements */
{
	int i;
	printf("\nEnter the array elements : ");
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
	}	
}
void displayArray(int arr[], int size)				/*Code  to display Array Elemets*/
{
	int i;
	printf("\nThe array elements are : \t");
	for(i=0; i<size; i++)
	{
		printf("%d\t",arr[i]);
	}
}
void selectionSort(int arr[],int size)
{
	int i, j;
	count++;
	int temp;
	count++;
	for(i=size-1; i>=0; i--)
	{
		for(j=i-1; j>=0; j--)
		{
			if(arr[j]>arr[i])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
				count++;
			}
			count++;
		}
		count++;
	}
	
}
