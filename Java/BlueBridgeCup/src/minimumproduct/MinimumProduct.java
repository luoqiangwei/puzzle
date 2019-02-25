package minimumproduct;

import java.util.Arrays;
import java.util.stream.IntStream;

public class MinimumProduct {
    public static void main(String[] args){
//        int[] A = {1, 3, -5};
//        int[] B = {-2, 4, 1};
        int[] A = {1, 2, 3, 4, 5};
        int[] B = {1, 0, 1, 0, 1};
        System.out.println(min(A, B));
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
