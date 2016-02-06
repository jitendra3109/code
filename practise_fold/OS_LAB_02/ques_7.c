/*##################
Lab 2 Q. 2.2,file ,lower to user case
and upper to lower case 
Codded by Jitendra Singh
######################### */

#include<stdio.h>
#include<string.h>
 
void main() {
   FILE *fp1, *fp2,*fp3;
   char a,b;
  
 
   fp1 = fopen("file1.c", "r");
     fp2=fopen("file2.c","w+");        //first write then after other work.  
      fp3=fopen("file3.c","w");
      if(fp1==NULL || fp2==NULL || fp3==NULL) {     
        puts("cannot open this file\n");
        exit(1);
       }
 
   
    
      while(1){
        b = fgetc(fp1);   //reading file1.
          if(b== EOF){
            break;
           }
        
          b = tolower(b);   //every character convert in lower case. 
           a = toupper(b);   //every character convert in upper case. 
         fputc(a, fp2);  //every characte in putting in in prog2.c.
         fputc(b,fp3);  //every characte in putting in in prog3.c.
         }

   
    
     fcloseall();      //close the all file 
   }