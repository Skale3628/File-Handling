//SEEK

#include<stdio.h>
void main(){
    FILE *fp=fopen("success.txt","r");
    fseek(fp,10,0);
    fseek(fp,-7,2);
    char ch;
    while((ch=fgetc(fp))!=EOF){
        printf("%c\n",ch);
    }

}