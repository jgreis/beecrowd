// beecrowd 1006 - Média 2
import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        Double A = sc.nextDouble();
        Double B = sc.nextDouble();
        Double C = sc.nextDouble();
        Double MEDIA = (A * 2 + B * 3 + C * 5) / 10;
        System.out.printf("MEDIA = %.1f\n", MEDIA);
        sc.close();
    }
}
