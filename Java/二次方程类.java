package Testquadraticequation;
import java.util.Scanner;
public class TestQuadraticEquation {
    public static void main(String[] args) {
        double aa,bb,cc,k;
        System.out.print("please input the value of a b c: ");
        Scanner input=new Scanner(System.in);
        aa=input.nextDouble();
        bb=input.nextDouble();
        cc=input.nextDouble();
        QuadraticEquation rt=new QuadraticEquation(aa,bb,cc);
        rt.getA();
        rt.getB();
        rt.getC();
        k=rt.getDiscriminant();
        String root1=rt.getRoot1();
        String root2=rt.getRoot2();
        if(root1=="Error!") 
            System.out.println("No solution!");
        else
            System.out.println("The roots are "+root1+" and "+root2);
    }
}
class QuadraticEquation {
    private double a;
    private double b;
    private double c;
    public QuadraticEquation(double a,double b,double c){
        this.a = a;
        this.b=b;
        this.c=c;   
     }
    public double getA(){
        return a;
    }
    public double getB(){
        return b;
    }
    public double getC(){
        return c;
    }
    public double getDiscriminant(){
        double k;
        k=b*b-4*a*c;
        return k;
    }
    public String getRoot1(){
           double r1;
           double k;
           String s;
           k=getDiscriminant();
           if(k<0)  s="Error!";
           else{
                r1=((-b+Math.sqrt(k))/(2*a));
                s=String.valueOf(r1);
           }
           return s;
    }
     public String getRoot2(){
           double r2;
           double k;
           String s;
           k=getDiscriminant();
           if(k<0)  s="Error!";
           else{
           r2=((-b-Math.sqrt(k))/(2*a));
           s=String.valueOf(r2);
           }
           return s;
    }   
}