import java.util.ArrayList;
import java.util.Comparator;


public class Live {
	private int key;
	private int s;
	private int e;
	
//	public static void sort(ArrayList<Live> A){
//		for(int i = 0; i < A.size() - 1; i++){
//			for (int j = 1; j < A.size() - i; i++){
//				if(A.get(j).getE() < A.get(j-1).getE()){
//					Live T = A.get(j);
//					
//					A.set(j, A.get(j-1));
//					A.set(j-1, T);
//				}
//			}
//		}
//	}
	
	public int getKey() {
		return key;
	}
	public Live(int key, int s, int e) {
		super();
		this.key = key;
		this.s = s;
		this.e = e;
	}
	@Override
	public String toString() {
		return "Live [e=" + e + ", key=" + key + ", s=" + s + "]";
	}
	public void setKey(int key) {
		this.key = key;
	}
	public int getS() {
		return s;
	}
	public void setS(int s) {
		this.s = s;
	}
	public int getE() {
		return e;
	}
	public void setE(int e) {
		this.e = e;
	}
	
}
