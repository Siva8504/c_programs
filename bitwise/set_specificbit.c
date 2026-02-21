#include<stdio.h>
int main(){
	int num,setbit=2;
	printf("enter num");
	scanf("%d",&num);
	num=num|(setbit<<1);
	printf("%d",num);
}
