// beecrowd 1004 - Produto Simples
import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        Integer A = sc.nextInt();
        Integer B = sc.nextInt();
        Integer PROD = A * B;
        System.out.printf("PROD = %d\n", PROD);
        sc.close();
    }
}
