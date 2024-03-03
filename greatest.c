#include<stdio.h>
int main()
{
    int n,i,a[10],sum=0;
    int greatest=0,pos=0;
    printf("Enter no. of elements in array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        greatest=a[0];
        if(a[i]<greatest)
        {
            greatest=a[i];
            pos=i;
        }
    }
    printf("Greatest no:%d \n",greatest);
    printf("Position:%d",pos);
}