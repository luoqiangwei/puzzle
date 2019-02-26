import java.util.Scanner;

public class AssociationMatrix {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int M = scanner.nextInt();
        int[][] matrix = new int[N][M];
        for(int i = 0; i < M; i++){
            matrix[scanner.nextInt() - 1][i] = 1;
            matrix[scanner.nextInt() - 1][i] = -1;
        }
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                System.out.print(matrix[i][j] + "\t");
            }
            System.out.println();
        }
    }
}
