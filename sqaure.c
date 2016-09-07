#include<stdio.h>
int main()
{
    int a[50],i,j,n,k=0,sum;
    printf("\nEnter the limit:");
    scanf("%d",&n);
    printf("\nEnter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        a[i]=a[i]*a[i];
    for(k=0;k<n;k++)
    {
    for(i=0;i<n-1;i++)
    {
        for(j=(i+1);j<n;j++)
        {
            if((a[i]+a[j])==a[k])
            {
                printf("%d %d %d",i,j,k);
                break;
            }
        }
    }
    }
    return(0);
}

