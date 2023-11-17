//fscanf

#include<stdio.h>
void main(){
    FILE *fp=fopen("binecaps.txt","r");
    char ch;
    fscanf(stdin,"%c",&ch);
    printf("%c\n",ch);
}