/* // 2908
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a, b, str[] = sc.nextLine().split(" ");
        int A, B;

        a = "";
        for (int i = 0; i < str[0].length(); i++) {
            a += str[0].charAt(str[0].length() - 1 - i);
        }
        A = Integer.parseInt(a);

        b = "";
        for (int i = 0; i < str[1].length(); i++) {
            b += str[1].charAt(str[1].length() - 1 - i);
        }
        B = Integer.parseInt(b);

        System.out.print(A > B ? A : B);
    }
}
 */