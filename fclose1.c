//fclose


#include<stdio.h>
void main(){
    printf("core2web\n");
    fclose(stdout);        //it will close the file (monitor) 
    printf("core2web\n");
}

//output
//core2web   ---> just show one char = "core2web" and the one(char) before "fclose" will get closed and we only get the latest one