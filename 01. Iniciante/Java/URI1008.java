import java.io.IOException;
import java.util.Scanner;

// Alterar a classe para Main no URI
public class URI1008 {
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
