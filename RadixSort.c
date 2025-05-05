#include <stdio.h>  
 int getMax(int a[], int n) {  
   int max = a[0],i;  
   for( i = 1; i<n; i++) 
	{  
      if(a[i] > max)  
         max = a[i];  
   }  
   return max; //maximum element from the array  
}  
void CountingSort(int a[],int n,int place)
{ int i,b[n];
//find the largest element of the array
int max=a[0];
for(i=1;i<n;i++)
{
if(a[i]>max)
max=a[i];
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
	count[(a[i] / place) % 10]++; 
}

//update the count array
for(i=1;i<=max;i++)
{
	count[i]=count[i]+count[i-1];
}
//finding the index of each element and place the elements in the output array i.e. in array b
  for (i = n - 1; i >= 0; i--) 
  {  
    b[count[(a[i] / place) % 10] - 1] = a[i];  
    count[(a[i] / place) % 10]--;  
  }  
  
//copy the sorted elements into the original array from array b
for(i=0;i<n;i++)
{
	a[i]=b[i];
}
}

// function to implement radix sort  
void radixsort(int a[], int n) {  
   
  // get maximum element from array  
  int max = getMax(a, n);  
  int place;
  // Apply counting sort to sort elements based on place value  
  for (place = 1; max / place > 0; place *= 10)  
    CountingSort(a, n, place);  
}  

// function to print array elements  
void printArray(int a[], int n) {  
int i;
  for (i = 0; i < n; ++i) {  
    printf("%d  ", a[i]);  
  }  
  printf("\n");  
}  

main()
{
int i,n ;
printf("Enter the number of elements in the array:\n");
scanf("%d",&n);
int a[n];
printf("Enter array elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before sorting array elements are - \n");  
printArray(a,n);  
radixsort(a, n);  
printf("After applying Radix sort, the array elements are - \n");  
printArray(a, n);  
 
}
