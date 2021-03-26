
public class EvenFibonacci {
	public static void main(String[] args) {
		int f1=1;
		int f2=1;
		int sum=0;
		int n=0;
		
		while(n <= 4000000) {
			n = f1 + f2;
			f1 = f2;
			f2 = n;
			
			if(n % 2 == 0)
				sum += n;	
		}
		System.out.println("Sum of even fibonacci numbers below 4 million is: "+ sum);
	}
	
}
