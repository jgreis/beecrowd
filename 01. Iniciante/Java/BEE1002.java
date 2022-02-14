// beecrowd 1002 - Área do Círculo
import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        Double pi = 3.14159;
        Double raio = sc.nextDouble();
        Double area = pi * (raio * raio);
        System.out.printf("A=%.4f\n", area);
        sc.close();
    }
}
