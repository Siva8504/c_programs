#include<stdio.h>
int main(){
	int i,num,bits=3,count=0;
	printf("enter num");
	scanf("%d",&num);
	for(i=bits;i>=0;i--){
		if((num>>i)&1){
			count++;
		}
	}
	printf("%d",count);
}
