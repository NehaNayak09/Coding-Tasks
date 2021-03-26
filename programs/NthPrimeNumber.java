import java.util.Scanner;

public class NthPrimeNumber {
	
	// check whether a number is prime 
	public static boolean is_prime(int n)
	{
		if(n < 2)
			return false;
		
		int i = 2;
		while(i *i <= n)
		{
			if(n % i == 0)
				return false;
			i = i +1;
		}
		return true;
	}
	
	// find prime number at nth position
	public static int nthPrime(int n)
	{
		int i = 2;
		
		while(n > 0)
		{
			if(is_prime(i))
			{
				n = n - 1;
				if(n == 0)
					return i;
				
			}
			i = i + 1;
		}
		return -1;
	}
	
	public static void main(String[] args)
	{
		
		int pos;
		
		System.out.print("Enter a position to find Prime Number: ");
		Scanner sc = new Scanner(System.in);
		pos= sc.nextInt();
		
		System.out.println(" Prime number at "+ pos+" "+ "is" +" "+ nthPrime(pos));
		
		sc.close();
		
		
	}

}
