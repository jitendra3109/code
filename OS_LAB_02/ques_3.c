/*##################
Lab 2 Q. 1.3, Pointer, Matrix multiplaction using pointer 
Codded by Jitendra Singh
######################### */

#include<stdio.h>
 int main(void)
{  
   int *arr,*brr,*crr;
	 int i,j,k;
	 int c[3][3];
   int a[3][3]={{2,2,2},{2,2,2},{2,2,2}};  //also change you change the value 
   int b[3][3]={{1,1,1},{1,1,1},{1,1,1,}}; //also change you change the value
    
    arr=&a;      //giving address of array to poiter 
    brr=&b;       //giving address of array to poiter
    crr=&c;       //giving address of array to poiter
    for(i=0;i<3;i++){
   	  for(j=0;j<3;j++){
         *(crr+(i*3)+j)=0;    //intialization of array  using poiter.
        }
     }

   for(i=0;i<3;i++){
   	for(j=0;j<3;j++){
       for(k=0;k<3;k++){
   		  *(crr+(i*3)+j)+=*(arr+(i*3)+k)* *(brr+(k*3)+j);
   	    }
   	}
   }


    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){  
      printf("%d\t",*(crr+(i*3)+j));
      }
    printf("\n");
   }

	return 0;
}