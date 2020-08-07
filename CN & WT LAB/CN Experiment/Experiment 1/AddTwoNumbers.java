import java.util.Scanner;
public class AddTwoNumbers
{
public static void main(String args[])
{
int num1,num2,sum;
Scanner sc=new Scanner(System.in);
System.out.println(" first numbers");
num1=sc.nextInt();
System.out.println(" second numbers");
num2=sc.nextInt();
sc.close();
sum=num1+num2;
System.out.println("Sum of these numbers"+sum);
}
}

