import java.util.Locale;
import java.util.Scanner;

public class soma_impares {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        int x, y, temp, soma = 0;
        System.out.println("Digite dois numeros:");
        x = sc.nextInt();
        y = sc.nextInt();
        if (x > y) {
            temp = x;
            x = y;
            y = temp;
        }
        for (int i = x + 1; i < y; i++) {
            if (i % 2 != 0) soma += i;
        }
        System.out.println("SOMA DOS IMPARES = " + soma);
        sc.close();
    }
}
