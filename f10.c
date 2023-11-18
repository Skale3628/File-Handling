//copy command(cp) -- imp 
//read from one file and write in another file

#include<stdio.h>
void main(){
    FILE *fp1=fopen("success.txt","r");
    FILE *fp2=fopen("property.txt","w");
   
    char ch;
    while((ch=fgetc(fp1))!=EOF){
       fputc(ch,fp2);                    //put character in fp2 file          
    } 
}