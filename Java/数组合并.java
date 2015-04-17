package javaapplication4;
import java.util.Scanner;
public class JavaApplication4 
    public static void main(Strin
        int a[]=new int[100];  
        int b[]=new int[100]; 
        int c[]=new int[200]; 
        int i;
        System.out.print("please 
        Scanner input =new Scan
        a[0]=input.nextInt();
        for(i=1;i<=a[0];i++){
            a[i]=input.nextInt();
         }
        b[0]=input.nextInt();
        for(i=1;i<=b[0];i++){
            b[i]=input.nextInt();
         }
   c=merge(a,b);
        for(i=1;i<=a[0]+b[0];i++){            System.out.print(c[i]+" ");
         }
    }
     public static int[] merge(int[] list1,int[] list2){
         int c[]=new int[100]; 
         int i,j,k;
         i=1;
         j=1;
         k=1;
         while(i<=list1[0]&&j<=list2[0]){
            if(list1[i]>=list2[j]){
                c[k]=list2[j];
                j++;
                k++;
            }                             
             if(list1[i]<list2[j]) {
                c[k]=list1[i];
                i++;
                k++;
             }                                 
         }  
         if(i>list1[0]){
            while(j<=list1[0]+1) { 
                c[k]=list2[j];
                j++;
                k++;
            }
         }
         if(j>list2[0]){
            while(i<=list2[0]+1) { 
                c[k]=list2[i];
                i++;
                k++;
            }
         }        
        return c;
	}
}