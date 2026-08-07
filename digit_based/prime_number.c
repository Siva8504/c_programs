#include<stdio.h>

int main(){
	int num=0,count=0,i;
	printf("enter num:");
	scanf("%d",&num);

	if(num<1){
                printf("not valid");
        }

	for(i=2;i * i <=num;i++){
		if(num%i==0){
			printf("not prime");
			return 0;
		}
	}
	printf("num is prime");


	/*

	for(i=1;i<=num;i++){      
		if(num%i==0){
		count++;
		}
	}
		if(count==2){
			printf("num is prime");
		
		}
		else{
			printf("num is not prime");
		}
		*/

	
	
}
