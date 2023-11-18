#include<stdio.h>
void main(){
    FILE *fp=fopen("abc.txt","w+");
    int num=10;
    int num1=20;
    printf("%ld\n",ftell(fp));
    putw(num,fp);
    putw(num1,fp);
    printf("%ld\n",ftell(fp));
    rewind(fp);
    printf("%ld\n",getw(fp));
    printf("%ld\n",getw(fp));
}

/*
output=>

0
9
10
20

*/