import org.junit.Test;

public class FindTheMaximumValueInTheArray {

    public FindTheMaximumValueInTheArray(){
        int[] A = new int[]{3, 2, 1};
        int max = Integer.MIN_VALUE;
        int subscript = 0;
        for(int i = 0; i < A.length; i++){
            if(A[i] > max){
                max = A[i];
                subscript = i;
            }
        }
        System.out.println(max + " " + subscript);
    }

    @Test
    public void test(){
        new FindTheMaximumValueInTheArray();
    }
}
