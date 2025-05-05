#include<stdio.h>
void CountingSort(int array[],int n)
{ int i,b[n];
//find the largest element of the array
int max=array[0];
for(i=1;i<n;i++)
{
if(array[i]>max)
max=array[i];
}
int count[max+1];
//intializing the count with all zeeros
for(i=0;i<=max;i++)
{
 count[i]=0;
}
// store the number of occurance of each element in the count 
for(i=0;i<n;i++)
{
	count[array[i]]=count[array[i]]+1;
}

//update the count array
for(i=1;i<=max;i++)
{
	count[i]=count[i]+count[i-1];
}
//finding the index of each element and place the elements in the output array i.e. in array b
for(i=n-1;i>=0;i--)
{
	b[--count[array[i]]]=array[i];
}
//copy the sorted elements into the original array from array b
for(i=0;i<n;i++)
{
	array[i]=b[i];
}
}
main()
{
int i,n ;
printf("Enter the number of elements in the array:\n");
scanf("%d",&n);
int array[n];
printf("Enter array elements:");
for(i=0;i<n;i++)
scanf("%d",&array[i]);
CountingSort(array,n);
printf("the sorted array:\n");
for(i=0;i<n;i++)
{
printf("%d ",array[i]);
}
}
