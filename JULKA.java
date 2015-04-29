import java.util.Scanner;
import java.math.BigInteger;
class julka
{ 
	public static void main (String args[])
	{
		Scanner input=new Scanner(System.in);
		int n=10;
		for(;n>0;n--)
		{
			BigInteger a,b,d;
			a=input.nextBigInteger();
			d=input.nextBigInteger();
			b=a.subtract(d);
			b=b.divide(BigInteger.valueOf(2));
			System.out.println(a.subtract(b));
			System.out.println(b);
		}
	}
} 