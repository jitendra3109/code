/*##################
Lab 2 Q. 1.4 ,Pointer,showing the identify the digits, alphabets and white spaces
from the entered string using poiter. 
Codded by Jitendra Singh
######################### */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 int main(void)
{  int i,j;
	int space=0,alphabets=0,digit=0;
    char arr[100];
     printf("enter the string\n");
     
     gets(arr);
     char *s;
     s=&arr[0];
     
     int len=strlen(arr);

    for(i=0;i<len;i++){
    	if(*s==32){                               //compare to ascii value .
           printf(" Here is space\n");
           s++;
    	}
    	if(*s>=65 && *s<=91 || *s>=97 && *s<=123 ){  //compare to ascii value .
         printf("alphabets = %c\n",*s);
         s++;}
         
          if(*s>=48 && *s<=57) {                  //compare to ascii value .
            printf("digit =%c\n",*s);
            s++;
          } 		
    }

     
	return 0;
}

