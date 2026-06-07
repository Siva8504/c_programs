#include<stdio.h>
 
void insert_array(int arr1[],int sub_arr[],int size,int size1,int p){
                int i;
		int temp[20];
		int temp_size=0;
		i=p;

		//copy elements from position p into temp array
		for(i=p;i<size;i++){
			temp[temp_size]=arr1[i];
			temp_size++;
		}

		//insert subarray into main array

		for(i=0;i<size1;i++){
			arr1[p+i]=sub_arr[i];
		}

		//copy elements back into main array

		for(i=0;i<temp_size;i++){
			arr1[p+size1+i]=temp[i];
		}
		size=size+size1;

        printf("array after insertion:");
                for(i=0;i<size;i++){
                        printf("%d",arr1[i]);
                }
}
			
int main(){
	int i,p,n,size1=0,size=0,arr1[30],sub_arr[10];
	printf("enter size and size1:");
	scanf("%d %d",&size,&size1);

	printf("enter arr1:");
	for(i=0;i<size;i++){
		scanf("%d",&arr1[i]);
	}
	printf("enter sub_arr:");
	for(i=0;i<size1;i++){

		scanf("%d",&sub_arr[i]);
	}
	printf("enter position:");
	scanf("%d",&p);

	insert_array(arr1,sub_arr,size,size1,p);
       
}
