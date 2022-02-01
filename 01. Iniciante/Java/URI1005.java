import java.io.IOException;
import java.util.Scanner;

// Alterar a classe para Main no URI
public class URI1005 {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        Double A = sc.nextDouble();
        Double B = sc.nextDouble();
        Double MEDIA = (A * 3.5 + B * 7.5) / 11.0;
        System.out.printf("MEDIA = %.5f\n", MEDIA);
        sc.close();
    }
}
