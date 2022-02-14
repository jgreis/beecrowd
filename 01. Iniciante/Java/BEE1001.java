// beecrowd 1001 - Extremamente Básico
import java.io.IOException;
import java.util.Scanner;

public class Main { 
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        Integer A = sc.nextInt();
        Integer B = sc.nextInt();
        Integer X = A + B;
        System.out.printf("X = %d\n", X);
        sc.close();
    }
}
