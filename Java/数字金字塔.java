package javaapplication2;
import java.util.Scanner;
public class JavaApplication2 {
    public static void main(String[] args)
        int line,i,j,k;
        System.out.print("please enter the 
        Scanner input =new Scanner(Syste
        line=input.nextInt();
        for(i=1;i<=line;i++){
            for(j=1;j<line-i+1;j++){
                System.out.print("  ");
            }
            for(k=i;k>=1;k--){
                System.out.print(k+" ");
             }
			for(j=2;j<i+1;j++){
                System.out.print(j+" ");
            }
           System.out.print("\n");
        }
    }
}