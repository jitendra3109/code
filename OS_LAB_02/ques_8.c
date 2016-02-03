/*##################
Lab 2 Q. 2.3,File,removing vovel from file1 and 
print in another file4. 
Codded by Jitendra Singh
######################### */

#include <stdio.h>
#include <string.h>
int main(){
    FILE *fp,*ft; 

    fp= fopen("file1.c", "r");
    ft=fopen("file4.c","w");
    
     if (fp==NULL || ft==NULL)
      	 { printf("It doesn't exsit\n");
 		 		exit(1);
 	 		
          	}
     
       char c;
      while((c = fgetc(fp)) != EOF){
       if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
          fputc(c,ft);    
     }
    }
    return 0;
}