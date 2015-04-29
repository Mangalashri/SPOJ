import java.math.BigInteger;
import java.util.Scanner;
class Ideone
{
	public static void main(String args[])
	{
		BigInteger n;
		Scanner in=new Scanner(System.in);
		while(in.hasNextBigInteger())
		{
			n=in.nextBigInteger();
			if(!n.equals(BigInteger.ONE))
				n=n.multiply(BigInteger.valueOf(2)).subtract(BigInteger.valueOf(2));
			System.out.println(n);
		}
	}
} 