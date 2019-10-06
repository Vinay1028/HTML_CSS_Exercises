 #include<stdio.h>
 void getArray(int [], int);
 void displayArray(int [],int);
 void insertionSort(int [], int);
 int count;
 int main()
 {
 	int arr[20],size;
	printf("enter the size of the array :");
	scanf("%d",&size);
	getArray(arr,size);
	insertionSort(arr,size);
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

void insertionSort(int arr[], int size)
{
	int i,j;
	count++;
	int key;
	count++;
	for(j=1; j<size; j++)
	{
		key = arr[j];
		i=j-1;
	while(i>=0 && arr[i]>key)
	{
		arr[i+1]=arr[i];
		i=i-1;
		count++;
	}	
	arr[i+1]=key;
	count++;
}
}
