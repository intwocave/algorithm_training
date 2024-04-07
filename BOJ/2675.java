/* // 2675
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = Integer.parseInt(sc.nextLine());
        int[] R = new int[T];
        String[] S = new String[T];

        for (int i = 0; i < T; i++) {
            String str[] = sc.nextLine().split(" ");
            R[i] = Integer.parseInt(str[0]);
            S[i] = str[1];
        }

        for(int i = 0; i < T; i++) {
            for (int j = 0; j < S[i].length(); j++) {
                for(int k = 0; k < R[i]; k++) {
                    System.out.print(S[i].charAt(j));
                }
            }
            System.out.println();
        }
    }
} */
