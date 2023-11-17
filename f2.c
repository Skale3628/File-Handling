//Fopen function of file handling

#include<stdio.h>
void main(){
    //FILE *fp=fopen("c2w.txt","r");                  //op => (nil)   if file is not present
    FILE *fp=fopen("f2.c","r");                         //op => 76859660  as if file is present it wil give a address
    printf("%p\n",fp);
}