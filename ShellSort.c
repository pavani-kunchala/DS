 #include<stdio.h>
void ShellSort(int a[], int n)
{
    int i, j, gap, temp;
    for(gap = n/2; gap > 0; gap =gap/2)
    {
        for(i = gap; i < n; i++)
        {
            for(j =i-gap;j>=0;j=j-gap)
            {
                if(a[j+gap]>a[j])
                  break ;
                else
                  {
						 temp=a[j+gap];
                   a[j+gap]=a[j];
                   a[j]=temp;
                  }
            }
        }
    }
}

int main()
{
    int i, n, a[10];
    printf("Enter the number of elements :: ");
    scanf("%d",&n);
    printf("Enter the elements :: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    ShellSort(a,n);
    printf("The sorted elements are ::  ");
    for(i = 0; i < n; i++)
        printf("%d  ",a[i]);
    printf("\n");
    return 0;
}
