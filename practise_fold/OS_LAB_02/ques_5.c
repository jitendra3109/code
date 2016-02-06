/*##################
Lab 2 Q. 1.5,Pointer  ,reverse the sequence of word
using poiter. 
Codded by Jitendra Singh
######################### */

#include<stdio.h>
 

  int main(void) { 
   int i,j ,temp,len,temp1;

    char arr[100];
    char *arr1;

        gets(arr);
         len=strlen(arr);

        arr1=&arr;
        for(i=len-1;i>=0;i--){
          if(*(arr1+i)!=32){
            temp+=1;           
                }
             if(*(arr+i)==32){
              for(j=i+1;j<=i+temp;j++){
                printf("%c",*(arr+j));
              }
              printf(" ");
             temp=0;
             }
         }

  for(j=i;j<=i+temp;j++){
      
     printf("%c",*(arr+j));
  }

     
     
  return 0;
}

