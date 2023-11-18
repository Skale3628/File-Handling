//fgetc

#include<stdio.h>
void main(){
    FILE *fp=fopen("success.txt","r");
    //int count=0;
    char ch;
    while((ch=fgetc(fp))!=EOF){
        printf("%c",ch);                //nternshipstudio belrise c2w
        //count++;
    }
    //printf("%d\n",count);
}