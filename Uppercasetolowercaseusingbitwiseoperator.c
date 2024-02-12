// uppercase to lowercase using bitwise--> A --> a
#include<stdio.h>
int main(){
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    ch=ch|32;
    printf("%c",ch);
}
