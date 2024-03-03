#include<stdio.h>
#include<stdlib.h>
int main(){
    int* ptr,*p;
    ptr = (int*)malloc(4*sizeof(int));
    p=ptr;

    if(ptr==NULL)
    {
        printf("Memory is Full");
    }
    else{
        printf("Enter the 4 elements: \n");
        for(int i=0;i<4;i++){
            scanf("%d",ptr);
            ptr+=1;
        }
    }
    printf("The eleemts are: ");
    for(int i=0;i<4;i++){
        printf("%d \n",*p);
        p++;
    }
    return 0;
}