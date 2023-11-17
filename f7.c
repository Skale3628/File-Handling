//ftell

#include<stdio.h>
void main(){
    FILE *fp=fopen("info.txt","w");
    printf("%ld\n",ftell(fp));
    fprintf(fp,"core2web");
    printf("%ld\n",ftell(fp));
    rewind(fp);
    fprintf(fp,"Binecaps");
}