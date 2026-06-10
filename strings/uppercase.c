#include<stdio.h>
#include<string.h>

int main(){
	char str[]="abc kmr rgrD";

	int len=strlen(str);
	int i;

    for(i=0;i<len;i++){
		if(i==0 || str[i-1]== ' ' || str[i+1]==' ' || str[i+1]=='\0'){
			if(str[i] >= 'a' && str[i] <= 'z'){
				str[i]=str[i]-32;
			}
		}
    }

     printf("%s",str);
    
}
