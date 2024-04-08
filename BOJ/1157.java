/* // 1157
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] alpha = new int[26];
        String str = sc.nextLine();

        for (int i = 0; i < str.length(); i++) {
            int a = (int)str.charAt(i);
            if (a >= 97) {
                // alpha[a - 97] = (char)(a - 32);
                alpha[a - 97]++;
            } else {
                // alpha[a - 65] = (char)a;
                alpha[a - 65]++;
            }
        }

        int max = alpha[0];
        char beta = (char)65;
        boolean dup = false;
        for (int i = 1; i < alpha.length; i++) {
            if (alpha[i] > max) {
                max = alpha[i];
                beta = (char)(i+65);
                dup = false;
            } else if (alpha[i] == max) {
                dup = true;
            }
        }

        if (dup) {
            System.out.println("?");
        } else {
            System.out.println(beta);
        }
    }
} */