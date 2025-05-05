#include <stdio.h>  
int getMax(int a[], int n) // function to get maximum element from the given array  
{  
  int max = a[0],i;  
  for (i = 1; i < n; i++)  
    if (a[i] > max)  
      max = a[i];  
  return max;  
}  
void bucket(int a[], int n) // function to implement bucket sort  
{  
  int max = getMax(a, n); //max is the maximum element of array  
  int bucket[max], i;  
  //intializing the count with all zeeros
  for (i = 0; i <= max; i++)  
  {  
    bucket[i] = 0;  
  }  
  // store the number of occurance of each element in the count
  for (i = 0; i < n; i++)  
  {  
    bucket[a[i]]++;  
  }  
  //merging buckets effectively
  int j=0;
  for (i = 0; i <= max; i++)  
  {  
    while (bucket[i] > 0)  
    {  
      a[j++] = i;  
      bucket[i]--;  
    }  
  }  
}  
// function to print array elements 
void printArr(int a[], int n) // function to print array elements  
{  int i;
  for (i = 0; i < n; ++i)  
    printf("%d  ", a[i]);  
}  
int main()  
{     
int i,n ;
printf("Enter the number of elements in the array:\n");
scanf("%d",&n);
int a[n];
printf("Enter array elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Before sorting array elements are - \n");  
printArr(a,n);  
bucket(a, n);  
printf("\nAfter applying bucket sort, the array elements are - \n");  
printArr(a, n);   
}  
