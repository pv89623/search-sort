#include<stdio.h>
int partition(int [],int,int);
void quicksort(int [],int,int);
void majority(int [],int);
int main()
{
    int a[100],i,n;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("\nEnter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    majority(a,n);
    return 0;
}
void quicksort(int a[],int low,int high)
{
    int pivot;
    if(low<high)
    {
        pivot=partition(a,low,high);
        quicksort(a,low,pivot-1);
        quicksort(a,pivot+1,high);
    }
}
int partition(int a[],int low,int high)
{
    int i=low,j=high,pivot_element=a[high],tmp;
    while(i<j)
    {
        while(a[i]<pivot_element)
            i++;
        while(a[j]>=pivot_element)
            j--;
        if(i<j)
        {
            tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
        }
    }
    a[high]=a[i];
    a[i]=pivot_element;
    return(i);
}
void majority(int a[],int n)
{
    int i,flag=1;
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            flag++;
            if(flag==(n/2))
            {
                printf("\nMajority=%d",a[i]);
                break;
            }
        }
        else
            flag=1;
    }
}
