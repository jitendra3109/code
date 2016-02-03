/*##################
Lab 2 Q. 1.1,poiter , using poiter acess value and address. 
Codded by Jitendra Singh
######################### */

#include<stdio.h>
int main(void)
{
	  int a; int i=0,j=0; 
	    int *p,*q;       // poiter variable;
	
  printf("enter the number\n");
	scanf("%d",&a);


 	printf("address= %d\t value=%d\n",&a,a);   //print value and address.

	  p=&a;                        // assing address.

	  printf("value = %d address = %d\n",*p,p); //using pointer print value and address.

  
   printf("enter the array of given number\n");
     int arr[10];
          for(i=0;i<a;i++){
  	           scanf("%d",&arr[i]);
   	     }

 
              q=arr;         // assing array address.     


    for( j=0;j<a;j++){
  	printf("Array value =%d\tArray address %d\n",*q,q);
  	q++;
  	}
return 0;
}