/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;
/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		        Scanner s =new Scanner(System.in);
        int t=s.nextInt();
        for(int x=1;x<=t;x++)
        {
        int n=s.nextInt();
        BigInteger f = BigInteger.ONE;
        for(int i=1;i<=n;i++)
            f = f.multiply(BigInteger.valueOf(i));
        System.out.println(f);
        }
	}
}
