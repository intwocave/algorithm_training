/* // 2750
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = Integer.parseInt(sc.nextLine());
        int[] n = new int[N];
        boolean sw = false;

        for (int i = 0; i < N; i++) {
            n[i] = Integer.parseInt(sc.nextLine());
        }

        do {
            sw = false;
            for (int i = 0; i < n.length - 1; i++) {
                if (n[i] > n[i+1]) {
                    int t = n[i];
                    n[i] = n[i+1];
                    n[i+1] = t;
                    sw = true;
                }
            }
        } while (sw != false);

        for (int i = 0; i < N; i++) {
            System.out.println(n[i]);
        }
    }
}
 */