#include <stdio.h>  
/* function to heapify a subtree. Here 'i' is the   
index of root node in array a[], and 'n' is the size of heap. */   
void heapify(int a[], int n, int i)  
{  
    int smallest = i; // Initialize largest as root  
    int left = 2 * i + 1; // left child  
    int right = 2 * i + 2; // right child  
    // If left child is smaller than root  
    if (left < n && a[left] < a[smallest])  
        smallest = left;  
    // If right child is smaller than root  
    if (right < n && a[right] < a[smallest])  
        smallest = right;  
    // If root is not smallest  
    if (smallest!= i) {  
        // Swap and continue heapifying if root is not largest
        int temp = a[i];  
        a[i] = a[ smallest];  
        a[smallest] = temp;     
        heapify(a, n, smallest);  
    }  
} 
// function to do heap sort  
void heapSort(int a[], int n)  
{  // Build max heap 
    int i;
    for (i = n / 2 - 1; i >= 0; i--)  
        heapify(a, n, i);  
    // One by one extract an element from heap  
    for (i = n - 1; i >= 0; i--) {  
        /* Move current root element to end*/  
        // swap a[0] with a[i]  
        int temp = a[0];  
        a[0] = a[i];  
        a[i] = temp;  
       // Heapify root element to get highest element at root again  
        heapify(a, i, 0);  
    }  
}  
/* function to print the array elements */  
void printArr(int arr[], int n)  
{  int i;
    for (i = 0; i < n; ++i)  
    {  
        printf("%d", arr[i]);  
        printf(" ");  
    }  
          
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
printArr(a, n);  
heapSort(a, n);  
printf("\nAfter sorting array elements are - \n");    
printArr(a, n);  
return 0;  
 	  
}  
