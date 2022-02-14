// beecrowd 1007 - Diferença
import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        Integer A = sc.nextInt();
        Integer B = sc.nextInt();
        Integer C = sc.nextInt();
        Integer D = sc.nextInt();
        Integer DIF = A * B - C * D;
        System.out.printf("DIFERENCA = %d\n", DIF);
        sc.close();
    }
}
