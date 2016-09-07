#include<stdio.h>
int main()
{
    int a[50],i,j,n,tmp;
    printf("\nEnter the limit:");
    scanf("%d",&n);
    printf("\nEnter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    i=0;
    j=n-1;
    while(i<j)
    {
        while(a[i]%2==0 && i<j)
            i++;
        while(a[j]%2==1 && i<j)
            j--;
        if(i<j)
        {
            tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
        }
    }
    printf("\nNew array\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}
