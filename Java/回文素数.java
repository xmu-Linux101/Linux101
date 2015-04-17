package javaapplication4;
public class JavaApplication4 {
    public static void main(String[] args) {
        int i,j;
        int m,n;
        j=0;
        int b[]=new int[10000000];
        for(i=1;i<10000000;i++){
            if(huiwensushu(i)==1){
                b[j]=i;
                j++;
            }
        }
        for(j=1;j<=100;j++){
                System.out.print(b[j]+" ");
                if(j%10==0)
                    System.out.print("\n");   
        }
    } 
    public static int huiwensushu(int n){
            int i,j,k,m;
            j=0;
            m=0;
            k=0;
            int a[]=new int[100];       
            for(i=2;i<=Math.sqrt(n);i++){
                if(n%i==0) {
                    k=1;
                    return 0;
                }
            }
            if(k==0){    
                while(n>0){
                    a[j]=n%10;
                    n=n/10;
                    j++;
                }
                for(i=0;i<j/2;i++){
                    if(a[i]!=a[j-i-1]){
                        m=1;
                    }
                } 
            if(m==0)    return 1;
            }
        return 0;
    }
}