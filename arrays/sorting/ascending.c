#include<stdio.h>
// 5 3 7 2 1 => if arr[i]>arr[i+1] => temp=arr[i] , arr[i]=arr[i+1],arr[i+1]=temp;
void ascending(int arr[],int n){
	int i,j,temp=0;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
					}

			}
	   }
	   printf("print sorted array:");
	   for(i=0;i<n;i++){
	   printf("%d",arr[i]);
			   }
	   }


int main(){
	int n;
	printf("enter no of array elements:");
	scanf("%d",&n);
	int arr[n],i;
	printf("enter arr:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	ascending(arr,n);
}
