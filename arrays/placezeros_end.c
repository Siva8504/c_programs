#include<stdio.h>
int main(){
        int arr[5]={1,0,4,0,6},i,j;
        int n=sizeof(arr)/sizeof(arr[0]);
        for(i=0;i<n;i++){
                if(arr[i]==0){

                        for(j=i;j<n;j++){
                                arr[j]=arr[j+1];
                                }
			arr[n-1]=0;
                        }
                
        }
        for(i = 0; i < n; i++)
                printf("%d ", arr[i]);


}
