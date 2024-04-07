/*
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[10];
        boolean[] sw = new boolean[42];
        int diff = 0;
        
        for (int i = 0; i < 10; i++) {
            arr[i] = Integer.parseInt(sc.nextLine()) % 42;
            sw[arr[i]] = true;
        }

        for (int i = 0; i < sw.length; i++) {
            if(sw[i] == true) {
                diff++;
            }
        }

        System.out.println(diff);
    }
}
*/