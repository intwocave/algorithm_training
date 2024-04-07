/* // 2577
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int result = 1, cnt = 0;
        
        for (int i = 0; i < 3; i++) {
            result *= Integer.parseInt(sc.nextLine());
        }

        String str = String.valueOf(result);
        int idx;
        for (int i = 0; i <= 9; i++) {
            cnt = 0;
            idx = 0;
            while (true) {
                idx = str.indexOf(String.valueOf(i), idx);
                if (idx == -1) {
                    break;
                }
                cnt++;
                idx++;
            }
            System.out.println(cnt);
        }
    }
} */