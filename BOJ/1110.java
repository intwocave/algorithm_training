/*
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        int init = n;
        int cnt = 0, nn;
        
        do {
            nn = n%10*10+((n/10+n%10)%10);
            n = nn;
            cnt++;
        } while(init != nn);
        
        System.out.println(cnt);
    }
}
*/