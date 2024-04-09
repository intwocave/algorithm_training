/* // 9012
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = Integer.parseInt(sc.nextLine());
        String str[] = new String[N];

        for(int i = 0; i < N; i++) {
            str[i] = sc.nextLine();
        }

        for(int i = 0; i < N; i++){
            System.out.println(iosys(str[i]) ? "YES" : "NO");
        }
    }

    static boolean iosys(String str) {
        String s; int idx;
        while(true) {
            idx = str.indexOf("()");
            if (idx == -1) {
                if (str.length() == 0)
                    return true;
                else 
                    return false;
            }
            s = str.substring(0, idx);
            s += str.substring(idx+2);
            str = s;
            // System.out.println(s);
        }
    }
}
 */