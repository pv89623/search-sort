#include<stdio.h>
int main()
{
    int a[50],n,i,sum=0,sum1=0;
    printf("\nEnter the limit:\n");
    scanf("%d",&n);
    printf("\nEnter the elements\n");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
        sum1=sum1+a[i];
    sum=(n*(n+1))/2;
    printf("\n%d",(sum-sum1));
    return(0);
}
