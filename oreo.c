include<stdio.h>
#define max 10
void push();
void pop();
void pushB();
void popB();
int stack[max],topB=max,n,i,top=-1,choice;
void push()
{
    int val;
    if(top==max/n-1)
    {
        printf("Overflow....");
    }
    else{
        printf("\nPush the elements into stackA\n");
        while(top<max/n){
        top=top+1;
        printf("\nEnter the %d index value: ",top);
        scanf("%d",&val);
        stack[top]=val;
    }
}
printf("\nThe elements in stackA are..");
for(int i=top;i>=0;i--)
{
    printf("%d\n",stack[i]);
}
}
void pushB()
{
    int val;
    if(top==max/n)
    {
        printf("Overflow....");
    }
    else{
        printf("\nPush the elements into stackB\n");
        while(top<max/n-1){
        topB=topB-1;
        printf("\nEnter the %d index value: ",topB);
        scanf("%d",&val);
        stack[topB]=val;
    }
}
printf("\nThe elements in stackA are..");
for(i=topB;i<max;i++)
{
    printf("%d\n",stack[i]);
}
}