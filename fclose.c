//fclose
//it wil close the file pointer

#include<stdio.h>
void main(){
    FILE *fp=fopen("success.txt","r");
    
    printf("%c\n",fgetc(fp));
    printf("%c\n",fgetc(fp));

    fclose(fp);
    
    printf("%c\n",fgetc(fp));
}


/*
output

i
n
~

*/