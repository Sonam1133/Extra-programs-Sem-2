// Maximum of 3 numbers using nested if

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 3 numbers : ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>=b){
        if(a>=c){
        printf("Greatest number a = %d\n",a);
        }
        else{
            printf("Greatest number c = %d\n",c);
        }
    }
    else{
        if(b>=c){
            printf("Greatest number b = %d\n",b);
        }
        else{
            printf("Greatest number c = %d\n",c);
        }
    }
}