//A communication module receives a text message and needs to determine whether the message is the same when read from left to right and right to left.

#include<stdio.h>
#include<string.h>

char reverse(char *text,int len){

int i,flag=1;
for(i=0;i<len/2;i++){

			if(text[i] != text[len-i-1]){
					flag =0;
					break;
			}
			
			
}

if(flag == 1){
	printf(" given text is palindrome ");
}
else{
	printf("not palindrome");
}
}


int main(){
	char text[20];
     
	printf("enter text:");
	scanf("%s", text);
	int len = strlen(text);
	reverse(text,len);
}


