//Program 3-Write a program that takes a string from the user and then prints it in reverse.
//After showing the reverse, the program should again ask the user to enter another string and continue the same process. 
//The string must be reversed without using any extra array.
 

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
        char str[100];
        printf("enter string:");
        fgets(str,sizeof(str),stdin);
        while(1){
        reverse_string(str);

        printf("%s \n",str);
        printf("enter new str:");

        fgets(str,sizeof(str),stdin);
        }
}
