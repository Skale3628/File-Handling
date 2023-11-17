//Append (a)

#include<stdio.h>
void main(){
    FILE *fp=fopen("binecaps.txt","a");
    fprintf(fp," whats up");
}