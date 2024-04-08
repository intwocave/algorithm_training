/* // 8958
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        String str[] = new String[n];

        int saki = 0, sum = 0;

        for (int i = 0; i < n; i++) {
            str[i] = sc.nextLine();
        }

        for (int j = 0; j < n; j++) {
            for (int i = 0; i < str[j].length(); i++) {
                if (str[j].charAt(i) == 'X') {
                    saki = 0;
                    // System.out.print("0 ");
                } else if (str[j].charAt(i) == 'O') {
                    sum += ++saki;
                    // System.out.print(saki + " ");
                }
            }
            System.out.println(sum);
            sum = 0;
            saki = 0;
        }
    }
} */