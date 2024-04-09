/* // 1978
import java.util.Scanner;

public class Main {
    // 0 <= N <= 100, 1 <= n <= 1000
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = Integer.parseInt(sc.nextLine());
        int cnt = 0;

        String n[] = sc.nextLine().split(" ");

        for (String s : n) {
            int c = 0;
            int is = Integer.parseInt(s);
            if (is > 1) {
                for (int i = 2; i <= is; i++) {
                    if (is%i == 0) {
                        // System.out.println("is: " + is + ", i: " + i);
                        c++;
                    }
                }
            }
            if (c == 1) {
                cnt++;
            }
        }

        System.out.print(cnt);
    }
}
 */