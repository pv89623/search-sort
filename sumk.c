#include<stdio.h>
int main()
{
    int a[50],i,j,n,k,l;
    printf("\nEnter the limit:");
    scanf("%d",&n);
    printf("\nEnter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nEnter the number:");
    scanf("%d",&k);
    l=0;
    j=n-1;
    for(i=0;i<n;i++)
    {
        if(a[l]+a[j]>k)
            j--;
        else if(a[l]+a[j]<k)
            l++;
        else if(a[l]+a[j]==k)
            break;
    }
    printf("%d\t%d",a[l],a[j]);
    return 0;
}
