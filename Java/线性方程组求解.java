import java.util.Scanner;
public class TestLinearEquation {
    public static void main(String[] args) {
        double aa,bb,cc,dd,ee,ff;
        double x = 0,y = 0;
        System.out.print("please input the value of a b c d e f: ");
        Scanner input=new Scanner(System.in);
        aa=input.nextDouble();
        bb=input.nextDouble();
        cc=input.nextDouble();
        dd=input.nextDouble();
        ee=input.nextDouble();
        ff=input.nextDouble();
        LinearEquation rt=new LinearEquation(aa,bb,cc,dd,ee,ff);
        rt.getA();
        rt.getB();
        rt.getC();
        rt.getD();
        rt.getE();
        rt.getF();
        if(rt.isSolvable()==false)     System.out.println("The linear equations have no solution:");
        else {
                x=rt.getX();
                y=rt.getY();
                System.out.println("x is "+x+" and "+"y is "+y); 
        }
         
    }
    
}
class LinearEquation {
    private double a;
    private double b;
    private double c;
    private double d;
    private double e;
    private double f;
    public LinearEquation(double a,double b,double c,double d,double e,double f){
        this.a = a;
        this.b=b;
        this.c=c;   
        this.d=d;
        this.e=e;
        this.f=f;
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
    public double getD(){
        return d;
    }
    public double getE(){
        return e;
    }
    public double getF(){
        return f;
    }
    public boolean isSolvable(){
        double k;
        k=a*d-b*c;
        if(k==0) return false;
        else return true;  
    }
    public double getX(){
        double x;
        x=(d*e-b*f)/(a*d-b*c);
        return x;
    }
    public double getY(){
        double y;
        y=(a*f-e*c)/(a*d-b*c);
        return y;
    }  
}