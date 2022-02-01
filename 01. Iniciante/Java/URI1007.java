import java.io.IOException;
import java.util.Scanner;

// Alterar a classe para Main no URI
public class URI1007 {
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
