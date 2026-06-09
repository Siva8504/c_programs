#include<stdio.h>

void shift_left(int arr[],int size){
        int i,temp=0;
                        for(i=0;i<size/2;i++){
                        temp=arr[i];
                        arr[i]=arr[size-1-i];
                        arr[size-1-i]=temp;
                        }
                        printf("array after shifting:");
                        for(i=0;i<size;i++){
                        printf("%d",arr[i]);
                        }
                        }

int main(){
        int size;
        printf("enter size:");
        scanf("%d",&size);

        int arr[size],i;
        printf("enter array elements:");
        for(i=0;i<size;i++){
                scanf("%d",&arr[i]);
        }

        shift_right(arr,size);
}
