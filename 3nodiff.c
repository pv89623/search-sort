#include<stdio.h>
void find(int [],int);
int main()
{
    int a[100],n,i;
    printf("\nEnter the limit:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    find(a,n);
    return 0;
}
void find(int a[],int n)
{
    int i,j,sum=0;
    for(i=0;i<n-1;i++)
    {
        for(j=(i+1);j<n;j++)
        {
            if(a[i]<a[j])
            {
                sum=a[i]-a[j];
                break;
            }
        }
    }
    for(i=0;i<(n-1);i++)
    {
        for(j=(i+1);j<n;j++)
        {
            if(a[i]<=a[j])
            {
                if((abs(a[i]-a[j]))>=sum)
                {
                    sum=abs(a[i]-a[j]);
                }
            }
        }
    }
    printf("\n%d",sum);
}
