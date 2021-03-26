import java.util.*;

public class LargestPrimeFactor {

	public static int largestPrimeFactor(long num)
	{
		int i;
		long temp = num;
		
		for(i=2; i<=temp; i++)
		{
			if(temp % i == 0) {
				temp /= i;
				i--;
			}
		}
		
		return i;
	}
	
	public static void main(String[] args)
	{
		long number;
		
		System.out.print("Enter a number to find Prime factor: ");
		Scanner sc = new Scanner(System.in);
		number = sc.nextLong();
		
		System.out.println("Largest Prime Factor of the number "+number+ " "+"is"+ " "+ largestPrimeFactor(number));
		
		sc.close();
	}
}


//Largest Prime Factor of the number 600851475143 is: 6857