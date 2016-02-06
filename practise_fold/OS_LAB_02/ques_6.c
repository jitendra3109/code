/*##################
Lab 2 Q. 2.1,File ,copy from file1.c to file4.c  
Codded by Jitendra Singh
######################### */

#include <stdio.h>
 void main(void){
 	FILE *fp,*ft;
 	char ch;

 	fp=fopen("file1.c","r");
 	   if(fp==NULL){
 		 printf("File doesn't exist \n");
 		  void exit();
 	    }
   
    ft=fopen("file4.c","w");
    if(ft==NULL){
    	printf("file doesn't exist\n");
    	void exit();
    }
    

 	       while(1){
 		          ch=fgetc(fp);
                   if(ch==EOF){
                 	break;
                     }
                     else{
 	             fputc(ch,ft);
 	         }
            	}
 	fclose(fp);
 	fclose(ft);
 }