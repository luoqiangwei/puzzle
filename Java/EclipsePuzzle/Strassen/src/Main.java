
public class Main {

	public static void main(String[] args) {
		int[][] A = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 1, 2, 3}, {4, 5, 6, 7}};
		int[][] B = {{8, 9, 1, 2}, {3, 4, 5, 6}, {7, 8, 9, 1}, {2, 3, 4, 5}};
	}
	
	public static int[][] strassen(int[][] A, int[][] B){
		
		return null;
	}

	//矩阵减法
	public static int[][] matrixSubtraction(int[][] A, int[][] B){
		int[][] C = new int[A.length][A.length];
		for(int i = 0; i < A.length; i++){
			for(int j = 0; j < A[i].length; j++){
				C[i][j] = A[i][j] - B[i][j];
			}
		}
		return C;
	}
	
	//矩阵加法
	public static int[][] matrixAddition(int[][] A, int[][] B){
		int[][] C = new int[A.length][A.length];
		for(int i = 0; i < A.length; i++){
			for(int j = 0; j < A[i].length; j++){
				C[i][j] = A[i][j] + B[i][j];
			}
		}
		return C;
	}
	
	//二阶矩阵乘法
	public static int[][] secondOrderMatrixMultiplication(int[][] A, int[][] B){
		int[][] C = new int[2][2];
		C[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0];
		C[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1];
		C[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0];
		C[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1];
		return C;
	}
}
