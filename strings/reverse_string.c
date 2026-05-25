#include<stdio.h>
#include<string.h>
void reverse_string(char *ptr){
int i,len;
char temp;
len =strlen(ptr);//sun d har
for(i=0;i<len/2;i++){
	temp=ptr[i];
	ptr[i]=ptr[len-i-1];
	ptr[len-i-1]=temp;
}

}
int main(){
	char str[10]="sundhar";
	reverse_string(str);

	printf("%s",str);
}


