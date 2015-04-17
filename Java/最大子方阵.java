package javaapplication11;
import java.util.Scanner;
public class JavaApplication11 {
    public static void main(String[] args) {
        int i,j;
        int n;
        int [][] a = new int[5][5];
        int [] c=new int[5];
        System.out.print("please input the value of n: ");
        Scanner input=new Scanner(System.in);
        n=input.nextInt();
        for (i=0;i<n;i++) {
            Scanner input1=new Scanner(System.in);
            for(j=0;j<n;j++){
                a[i][j]= input1.nextInt();
            }
        }
        c=findLargestBlock(a);
        System.out.print("The location is ("+c[0]+","+c[1]+")\n");
        System.out.print("The size is "+c[2]);
    }
    public static int[] findLargestBlock(int[][] a){
        int i,j;
        int [] c=new int[5];
        int size;
        for(i=1;i<a.length;i++){
            for(j=1;j<a.length;j++){
                if(a[i][j]==1){
                    size=0;
                    if(a[i-1][j]>a[i][j-1]){
                       size=a[i][j-1];
                    }
                    else{
                        size=a[i-1][j];
                     }
                    if(size>a[i-1][j-1]){
                        size=a[i-1][j-1];
                    }
                    a[i][j]=size+1;
                    if(c[2]<a[i][j]){
                        c[2]=a[i][j];
                        c[0]=i-c[2]+1;
                        c[1]=j-c[2]+1;
                    }
                }
            }
        }
        return c;    
    }
}