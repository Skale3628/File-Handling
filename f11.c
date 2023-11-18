//fgets 

#include<stdio.h>
void main(){
   // FILE *fp=fopen("success.txt","r");
      
      FILE *fp=fopen("success.txt","a");            //a (append) => add char at end 
     char compname[20]="byjus";                 //add byjus in the file 
    fputs(compname,fp); 
    
    //char compname[20];               //array of string (non constant data)
   // fgets(compname,12,fp);          //to get particular data from the file 
    //puts(compname);
}