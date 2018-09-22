import java.util.Arrays;
import java.util.Scanner;


public class A1T {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int page = sc.nextInt() + 1;
		int []store = new int[10];
		for(int i = 0; i < store.length; i++)
			store[i] = 0;
		
		while((page--) != 1){
			String str = page + "";
			for(int i = 0; i < str.length(); i++){
				switch(str.charAt(i)){
				case '0':
					store[0]++;
					break;
				case '1':
					store[1]++;
					break;
				case '2':
					store[2]++;
					break;
				case '3':
					store[3]++;
					break;
				case '4':
					store[4]++;
					break;
				case '5':
					store[5]++;
					break;
				case '6':
					store[6]++;
					break;
				case '7':
					store[7]++;
					break;
				case '8':
					store[8]++;
					break;
				case '9':
					store[9]++;
					break;
				}
			}
		}
		System.out.println(Arrays.toString(store));
	}
}
