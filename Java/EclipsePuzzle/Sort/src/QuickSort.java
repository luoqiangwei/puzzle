import java.util.Random;

public class QuickSort {
	public static void quickSort(int[] A, int start, int end) {
		Random random = new Random();
		if(start >= end) return;
		int randomNum = random.nextInt(end - start) + start;
		int key = A[randomNum];
		int i = start;
		int j = end;
		A[randomNum] = A[end];
		A[end] = key;
		while (i < j) {
			while (A[i] <= key && i < j) {
				i++;
			}
			A[j] = A[i];
			while (A[j] >= key && i < j) {
				j--;
			}
			A[i] = A[j];
		}
		A[i] = key;
		quickSort(A, start, i - 1);
		quickSort(A, j + 1, end);
	}
}
