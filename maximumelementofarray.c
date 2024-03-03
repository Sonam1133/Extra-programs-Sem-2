#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    
    printf("The Elements of array are..\n");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    
    int index;

    for(int i=0;i<=n-1;i++) {
        if(arr[i]<min){
            min = arr[i];
            index=i;
        }
    }
    printf("The maximum element is %d at index %d ",min,index);
}