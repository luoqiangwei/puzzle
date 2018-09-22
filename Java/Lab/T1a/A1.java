import java.math.BigInteger;
import java.util.Arrays;
import java.util.Scanner;


public class A1 {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		BigInteger page = new BigInteger(sc.next());
		BigInteger []store = new BigInteger[10];
		for(int i = 0; i < store.length; i++)
			store[i] = BigInteger.valueOf(0);
		
		while(page.compareTo(BigInteger.valueOf(0)) != 0){
			String str = page + "";
			for(int i = 0; i < str.length(); i++){
				switch(str.charAt(i)){
				case '0':
					store[0] = store[0].add(BigInteger.valueOf(1));
					break;
				case '1':
					store[1] = store[1].add(BigInteger.valueOf(1));
					break;
				case '2':
					store[2] = store[2].add(BigInteger.valueOf(1));
					break;
				case '3':
					store[3] = store[3].add(BigInteger.valueOf(1));
					break;
				case '4':
					store[4] = store[4].add(BigInteger.valueOf(1));
					break;
				case '5':
					store[5] = store[5].add(BigInteger.valueOf(1));
					break;
				case '6':
					store[6] = store[6].add(BigInteger.valueOf(1));
					break;
				case '7':
					store[7] = store[7].add(BigInteger.valueOf(1));
					break;
				case '8':
					store[8] = store[8].add(BigInteger.valueOf(1));
					break;
				case '9':
					store[9] = store[9].add(BigInteger.valueOf(1));
					break;
				}
			}
			page = page.subtract(BigInteger.valueOf(1));
		}
		System.out.println(Arrays.toString(store));
	}
}
