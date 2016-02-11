import java.util.*;
public class codechef{
 public static void main(String[] args) {
      Scanner in=new Scanner(System.in);
      int n=in.nextInt();
      int a[]=new int[n+1];
      int b []=new int[n+1];
      int c[][] =new int [n+1][n+1]; 
      
      for (int i=1;i<=n ;i++ ) {
      	a[i]=in.nextInt();      	
      }
       for (int j=1;j<=n ;j++ ) {
      	b[j]=in.nextInt();      	
      }

        for (int i=1;i<=n ;i++ ) {
           for (int j=1;j<=n ;j++ ) {
      	     c[i][j]=(a[i]*b[j])+(i*b[j])+(j*a[i])+(i*j);
           }
   	
      }

    for(int k=1;k<=n;k++){
      int sum=0;
      for (int i=k;i<=n ;i++ ) {
           for (int j=k;j<=n ;j++ ) {
                sum=sum+c[i][j];

           }
       }
       System.out.print(sum+" ");
   }


       for (int i=1;i<=n ;i++ ) {
           for (int j=1;j<=n ;j++ ) {
      	   System.out.print(c[i][j]+" ");   
           }
           System.out.println();
      }
   }

}