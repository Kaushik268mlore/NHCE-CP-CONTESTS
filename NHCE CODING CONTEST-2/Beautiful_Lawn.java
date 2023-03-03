import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int b = sc.nextInt();
            int ans = (b/2) * ((b/2)-1) / 2;
            System.out.println(ans);
        }
        sc.close();
    }
}