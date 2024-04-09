/* // 10872
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = Integer.parseInt(sc.nextLine());

        System.out.println(factorial(N));
    }

    static int factorial(int N) {
        if (N <= 1) {
            return 1;
        }

        return N * factorial(N-1);
    }
}
 */