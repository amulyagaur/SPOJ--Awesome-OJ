/* package whatever; // don't place package name! */
import java.math.BigInteger;
import java.util.Scanner;
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scanner = new Scanner(System.in);
		// your code goes here
		for(int i=1;i<=10;i++)
		{
			String total = scanner.next();
			String  dif= scanner.next();
			BigInteger A  = new BigInteger(total);
			BigInteger B  = new BigInteger(dif);
			BigInteger D = A.subtract(B);
			BigInteger N = D.divide(BigInteger.valueOf(2));
			BigInteger K = N.add(B);
			System.out.println(K);
			System.out.println(N);
		}
	}
}
