//lowercase to uppercase using bitwise 
#include<stdio.h>
int main(){
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    ch=ch&223;
    printf("%c",ch);

}
