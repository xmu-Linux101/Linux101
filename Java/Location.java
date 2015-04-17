import java.util.Scanner;
public class TestLocation {
    public static void main(String[] args) {
       double[][] a = new double[10][10];
       int i,j;
       int n,m;
       System.out.print("please input the row and col of array: ");
       Scanner input=new Scanner(System.in);
       n=input.nextInt();
       m=input.nextInt();
       for (i=0;i<n;i++) {
            System.out.print("please input the value of row "+(i+1)+":");
            Scanner input1=new Scanner(System.in);
            for(j=0;j<m;j++){
                a[i][j]= input1.nextDouble();
            }
        } 
        Location rt = new Location(0,0,0);
        Location locateLargest = rt.locateLargest(a);
    }
}
class Location{
    private static int row;
    private static int col;
    private static double maxValue;
    public Location(int row,int col,double maxValue){
        Location.col=col;
        Location.row=row;
        Location.maxValue=maxValue; 
    }
    public double getcol(){
        return col;
    }
    public double getrow(){
        return row;
    }
    public double getmaxValue(){
        return maxValue;
    }
    public static Location locateLargest(double[][] a){
         int i,j;
         maxValue=0;
         row=0;
         col=0;
         for(i=0;i<a.length;i++){
              for(j=0;j<a[i].length;j++){
                   if(a[i][j]>maxValue){
                         maxValue=a[i][j];
                         row=i;
                         col=j;
                      }
                 }
        }
        System.out.print("The largest value of the array is "+maxValue+"\n");
        System.out.print("The largest value's location is ("+row+" "+col+")");
        return null;
    }
}