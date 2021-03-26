import java.util.*;

public class SelectionSort {
		
	public static void selectionSort(int[] array)
	{
		int i,j,n;
		n= array.length;
		
		
		for(i=0; i< n-1; i++)
		{
			int imin = i;
			
			for(j = i+1; j<n; j++)
			{
				if(array[j] < array[imin])
					imin = j; // searching for lowest index
			}
			
			if(imin != i)
			{
				int temp = array[imin];
				array[imin] = array[i];
				array[i] = temp;
			}
		}
		
	}
	
	public static void main(String[] agrs)
	{
		int arr_size,i;
		
		System.out.print("Enter array size: ");
		Scanner sc = new Scanner(System.in);
		arr_size = sc.nextInt();
	
		int array[] = new int[arr_size];
		System.out.println("Enter array elements: ");
		for(i =0; i<arr_size; i++)
			array[i] = sc.nextInt();
		
		
		selectionSort(array);//calling selection sort method to sort array
		
		System.out.println("After Selection sort:");
		for(i=0; i<arr_size;i++)
			System.out.print(array[i]+ " ");
	}

}
