package minimumproduct;

import java.util.Arrays;
import java.util.Scanner;
import java.util.stream.IntStream;

public class Main {

    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        while(N-- != 0){
            int n = scanner.nextInt();
            int[] A = new int[n];
            int[] B = new int[n];
            for(int i = 0; i < n; i++){
                A[i] = scanner.nextInt();
            }
            for(int i = 0; i < n; i++){
                B[i] = scanner.nextInt();
            }
            System.out.println(min(A, B));
        }
    }

    public static int min(int[] A, int[] B){
        Arrays.sort(A);
        Arrays.sort(B);
        Object[] AL = IntStream.rangeClosed(1, A.length).mapToObj(i -> A[A.length - i]).toArray();
        Object[] BL = IntStream.rangeClosed(1, B.length).mapToObj(i -> B[B.length - i]).toArray();
        int a = 0;
        int b = 0;
        for(int i = 0; i < A.length; i++){
            a += A[i] * Integer.parseInt(BL[i].toString());
        }
        for(int i = 0; i < A.length; i++){
            b += B[i] * Integer.parseInt(AL[i].toString());
        }
        if(a >= b){
            return b;
        } else{
            return a;
        }
    }
}
