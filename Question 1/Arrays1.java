package assnmt1;
import java.util.Scanner;
public class Arrays1 {

	public int maxIndex(int[] arr){
		int maxIndex = 0;
		for(int i=0 ; i<arr.length ; i++){
			if(arr[i] > arr[maxIndex])
				maxIndex = i;
		}
		return maxIndex;
	}
	
	public int minIndex(int[] arr){
		int minIndex = 0;
		for(int i=0 ; i<arr.length ; i++){
			if(arr[i] < arr[minIndex])
				minIndex = i;
		}
		return minIndex;
	}

	public static void main(String[] args) {
		Arrays1 a = new Arrays1();
		Scanner read = new Scanner(System.in);
		int tests = read.nextInt();
		
		while(tests > 0){
			int size = read.nextInt();
			
			int[] array = new int[size];
			for(int i = 0; i<size ; i++)
				array[i] = read.nextInt();
			
			System.out.print(array[a.maxIndex(array)]+" "+array[a.minIndex(array)]+"\n");
			tests--;
		}
		
	}

}
