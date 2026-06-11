#include<stdio.h>
#include<string.h>

int main(){
	char str[]="Sun@1Ar";
	int len=strlen(str);
	int i;

	for(i=0;i<len;i++){
		if(str[i]>='a' && str[i]<='z'){
			printf("%c:is small letter\n",str[i]);
		}
		else if(str[i]>='A' && str[i]<='Z'){
			printf("%c:is capital letter\n",str[i]);
		}
		else{
			printf("%c is not alphabit\n",str[i]);
		}
	}
}
