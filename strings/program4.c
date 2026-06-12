#include<stdio.h>
#include<string.h>

int main(){
	char str[30];
	printf("enter the string:");
	fgets(str,sizeof(str),stdin);

	int pos;
	printf("enter postion:");
	scanf("%d",&pos);

	int i;

	for(i=pos;str[i]!='\0';i+=2){
				if(str[i]>='a' && str[i]<='z'){
					str[i]=str[i]-32;
				}
	}
	printf("%s",str);
}
