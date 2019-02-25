import org.junit.Test;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class TorrysConfusion {

    public TorrysConfusion(){
        List<Integer> prime = new ArrayList<>();
        prime.add(2);
        for(int i = 3; prime.size() < 100000; i += 2){
            Boolean isPrime = true;
            for(int j = 2; j < Math.sqrt(j); j++){
                if(i % j == 0){
                    isPrime = false;
                    break;
                }
            }
            if(isPrime){
                prime.add(i);
            }
        }
//        System.out.println(Arrays.toString(prime.toArray()));
//        Scanner scanner = new Scanner(System.in);
//        int taget = scanner.nextInt();
        int taget = 100000;
        long sum = 1;
        for(int i = 0; i < taget; i++){
            sum *= prime.get(i);
            sum %= 50000;
        }
        System.out.println(sum);
    }

    @Test
    public void test(){
        new TorrysConfusion();
    }
}