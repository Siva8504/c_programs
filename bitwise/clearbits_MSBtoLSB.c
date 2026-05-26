// 255=11111111 suppose i=2 00011111 

#include<stdio.h>

int clrbit_RHBtoLHB(int val){
             int bits,i;
	     printf("enter bits:");
	     scanf("%d",&bits);
	     for(i=bits;i>=0;i--){     //bits=8  ,num=1111 1111 
		     val &= ~(1<<i);
	     }
return val;
}

                      


int main(){
	int num;
	printf("enter num:");
       scanf("%d",&num);
int ret=clrbit_RHBtoLHB(num);
printf("%d",ret);
}
