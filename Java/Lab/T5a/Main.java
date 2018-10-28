import java.util.Scanner;

public class Main {
    private static int in = 0;
    private static int count = 0;
    public static void main(String[] args){
        in = new Scanner(System.in).nextInt();
        int[][] map = new int[in][in];
        Queen(map, 0);
        System.out.println(count + "个解");
    }

    public static void Queen(int[][] chess, int row){
        int[][] temp = chess.clone();
        if(row == in){
            count++;
            System.out.println("--------------" + count + "---------------");
            for(int i =0; i < in; i++){
                for(int j = 0; j < in; j++)
                {
                    System.out.print(chess[i][j] + " ");
                }
                System.out.println();
            }
            return;
        }

        for(int i = 0; i < in; i++){
            for(int j = 0; j < in; j++)
                temp[row][j] = 0;
            temp[row][i] = 1;
            if(isSafety(temp, row, i))
                Queen(temp, row + 1);

        }
    }

    public static boolean isSafety(int[][] chess, int row, int col){
        int step = 1;
        while(row - step >= 0){
            if(col - step >= 0 && chess[row-step][col-step] == 1)
                return false;
            if(chess[row-step][col] == 1)
                return false;
            if(col + step < in && chess[row-step][col+step] == 1)
                return false;
            step++;
        }
        return true;
    }
}
