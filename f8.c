//putw and getw


#include<stdio.h>
void main(){
    FILE *fp=fopen("Demo.txt","w+");
   
    printf("%d\n",fgetw(fp));                   // -1
    //printf("%d\n",EOF);                         //-1
}