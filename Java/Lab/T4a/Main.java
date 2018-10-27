import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;


public class Main {
	public static void main(String[] argc){
//		int [][]store = {{1, 1, 23}, {2, 12, 28}, {3, 25, 35}, {4, 27, 80}, {5, 36, 50}};
		//System.out.println(Arrays.deepToString(store));
		ArrayList<Live> A = new ArrayList<Live>();
		A.add(new Live(1, 1, 23));
		A.add(new Live(2, 12, 28));
		A.add(new Live(3, 25, 35));
		A.add(new Live(4, 27, 80));
		A.add(new Live(5, 36, 50));
		Collections.sort(A, new SortByE());
//		System.out.println(A);
		System.out.println(Arrays.deepToString(track(A)));
	}
	
	public static int[][] track(ArrayList<Live> A){
		int e = 0;
		int [][]B = new int[A.size()][A.size()];
		while (A.size() != 0){
			B[e][0] = A.get(0).getKey();
			int end = A.get(0).getE();
			A.remove(0);
			int s = 1;
			for(int i = 0; i < A.size(); i++){
				if(A.get(i).getS() >= end){
					B[e][s] = A.get(i).getKey();
					end = A.get(i).getE();
					s++;
					A.remove(i);
					i--;
				}
			}
			e++;
		}
		
		return B;
	}
	
	
}

class SortByE implements Comparator<Object>{

	@Override
	public int compare(Object o1, Object o2) {
		Live l1 = (Live)o1;
		Live l2 = (Live)o2;
		if(l1.getE() > l2.getE()){
			return 1;
		}
		return -1;
	}
	
}