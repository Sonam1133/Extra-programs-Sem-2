#include<stdio.h>
int main()
{
    int a[10],i,n,c=0,x;
    printf("Enter the n value: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the elements: "); 
        scanf("%d",&a[i]);
    }
    printf("The elements are: \n");
    for(i=0;i<n;i++)
    {
        printf("\t%d", a[i]);
    }
    printf("\n The element to be searched..\n");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(x==a[i])
        {
            c=1;
            printf("The element is found..\n");
        }
    }
    if(c==0)
    {
    printf("The element is not found..\n");
    }
    return 0;
}