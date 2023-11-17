#include<stdio.h>
void main(){
    FILE *fp=fopen("c2w.txt","r+");
    fprintf(fp,"exception handling");
}