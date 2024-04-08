/* // 4344
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int C = Integer.parseInt(sc.nextLine());
        String[] arr;
        int[][] N = new int[C][];
        int[] avg = new int[C];
        double[] p = new double[C];

        for (int i = 0; i < C; i++) {
            arr = sc.nextLine().split(" ");
            N[i] = new int[Integer.parseInt(arr[0])];
            // System.out.print(N[i].length + "\n");
            for (int j = 1; j <= N[i].length; j++){
                N[i][j-1] = Integer.parseInt(arr[j]);
                avg[i] += Integer.parseInt(arr[j]);
                // System.out.print(N[i][j-1]+" ");
            }
            // System.out.println("\n" + avg[i] / N[i].length);
            avg[i] /= N[i].length;

            int cnt = 0;
            for (int j = 0; j < N[i].length; j++) {
                if (N[i][j] > avg[i]) {
                    cnt++;
                }
            }
            p[i] = (double)cnt / N[i].length;
            // System.out.println(cnt + "/" + N[i].length + "=" + p[i]);
        }
        
        for(int i = 0; i < C; i++) {
            System.out.printf("%.3f%%\n", p[i]*100);
        }
    }
}
 */