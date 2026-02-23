#include<stdio.h>
int main(){
	int num,pairbit=0,i=0;
	printf("enter num:");
	scanf("%d",&num);
	int bits=sizeof(int) * 8;
	for(i=0;i<=bits-1;i+=2){
		if((num & (1<<i) && (num & (1<<(i+1))))){
			pairbit++;
		}
	}
	printf("%d",pairbit);
}
