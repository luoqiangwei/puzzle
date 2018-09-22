public class A{
    /**
	 * 递归的版本
	 * @param w 物品的重量的集合
	 * @param v 物品的价值的集合
	 * @param i 当前能取得的物品的数量
	 * @param s 当前背包还能存放的重量
	 * @return
	 */
	public static int ref_01package(int[] w, int[] v, int i, int s) {
		
		/**
		 * 有两种情况
		 * 1: 选择当前的物品   
		 * 2: 不选择当前的物品
		 */
		if (i == 0) {
			if(w[i] > s){
				return 0;
			}else{
				return v[0];
			}
		}
		if (s == 0) {
			return 0; 
		}
		// 当前的物品的重量大于当前的背包剩余的重量
		if (w[i] > s) {
			return ref_01package(w, v, i - 1, s);
		}
		// 选择当前的物品
		int A = ref_01package(w, v, i - 1, s - w[i]) + v[i];
		// 不选择当前的物品
		int B =  ref_01package(w, v, i - 1, s);
		return Math.max(A, B);
	}
	
	/**
	 * 动态规划的版本
	 * @param w
	 * @param v
	 * @return
	 */
	public static int dp_01package(int[] w, int[] v) {
		return 0;
	}
	
	public static void main(String[] args) {
		// 定义以下两个数组, 一个代表了物品的重量, 一个代表的物品的价值
		int[] v = {2, 5, 3, 10, 4};
		int[] w = {1, 3, 2, 6, 2};
		// int[] w = {4, 6, 2, 2, 5, 1};
		// int[] v = {8, 10, 6, 3, 7, 2};
		int max  = ref_01package(w, v, 4, 12);
		System.out.println(max);
	}

}