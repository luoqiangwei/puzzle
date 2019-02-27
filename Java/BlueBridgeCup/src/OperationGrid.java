import java.util.Scanner;

public class OperationGrid {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        int[] N = new int[n];
        for(int i = 0; i < n; i++){
            N[i] = scanner.nextInt();
        }
        for(int i = 0; i < m; i++){
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            int c = scanner.nextInt();
            if(a == 1){
                N[b-1] = c;
            }else if(a == 2){
                int result = 0;
                for(int j = b - 1; j < c; j++){
                    result += N[j];
                }
                System.out.println(result);
            }else{
                int max = Integer.MIN_VALUE;
                for(int k = b - 1; k < c; k++){
                    if(max < N[k]){
                        max = N[k];
                    }
                }
                System.out.println(max);
            }
        }

    }
}
