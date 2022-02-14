// beecrowd 1008 - Salário
import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);
        Integer idFunc = sc.nextInt();
        Integer hrsTrab = sc.nextInt();
        Double vlrHora = sc.nextDouble();
        Double salario = hrsTrab * vlrHora;
        System.out.printf("NUMBER = %d\nSALARY = U$ %.2f\n", idFunc, salario);
        sc.close();
    }
}
