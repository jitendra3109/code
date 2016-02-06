/*##################
Lab 2 Q. 1.2, Pointer , Bubble  sort using poiter. 
Codded by Jitendra Singh
######################### */

#include<stdio.h>
void buble(int *,int);
int main(void)

 {  int arr[10],i,j;

 	
    
    printf("enter array\n");
    for(i=0;i<10;i++){
    	scanf("%d",&arr[i]);
    }

    buble(arr,10);
    
    for(i=0;i<10;i++){
    	printf("%d\t",arr[i]);
    }
 	return 0;
 }

void buble(int *arr1,int n){   //passing array to give address a pointer. 
  int i,j,temp;
 
  for(i=0;i<n-1;i++){
     for(j=0;j<n-i-1;j++){

     	if(*(arr1+j)>*(arr1+j+1)){
     	
      	temp=*(arr1+j);
     	  	*(arr1+j)=*(arr1+j+1);
     		   *(arr1+j+1)=temp;
       	}
      }
   }

 }