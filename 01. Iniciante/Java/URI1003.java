import java.io.IOException;
import java.util.Scanner;

// Alterar a classe para Main no URI
public class URI1003 {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        Integer A = sc.nextInt();
        Integer B = sc.nextInt();
        Integer SOMA = A + B;
        System.out.printf("SOMA = %d\n", SOMA);
        sc.close();
    }
}
