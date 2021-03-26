import java.util.Arrays;
import java.util.Scanner;


public class QuickSort {
	
	public static int partition(int[] array, int l, int h)
	{
		int pivot = array[h];
		int i = l-1;
		
		for(int j=l; j<h; j++)
		{
			if(array[j] <= pivot)
			{
				i++;
				int temp = array[i];
				array[i]=array[j];
				array[j]= temp;
			}
		}
		int temp = array[i+1];
		array[i+1] = array[h];
		array[h] = temp;
		
		return (i+1);
	}
	
	public static void quickSort(int[] array, int l, int h)// taken l for lower element & h for higher element
	{	
		if(l<h)
		{
			int j = partition(array,l,h);
			quickSort(array,l,j-1);
			quickSort(array,j+1,h);
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
		
		
		quickSort(array,0,arr_size-1);//calling quick sort method to sort array
		
		System.out.println("After Quick sort:");
		for(i=0; i<arr_size;i++)
			System.out.print(array[i]+ " ");
	}

}
