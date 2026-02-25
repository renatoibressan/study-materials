import java.util.Locale;
import java.util.Scanner;

public class diagonal_negativos {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        int[][] m;
        int[] v;
        int n, i, j, negativos = 0;
        System.out.println("Qual a ordem da matriz? ");
        n = sc.nextInt();
        m = new int[n][n];
        v = new int[n];
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                System.out.println("Elemento [" + i + "," + j + "]: ");
                m[i][j] = sc.nextInt();
                if (i == j) v[j] = m[i][j];
                if (m[i][j] < 0) negativos++;
            }
        }
        System.out.println("DIAGONAL PRINCIPAL:");
        for (i = 0; i < n; i++) {
            System.out.println(v[i] + " ");
        }
        System.out.println("QUANTIDADE DE NEGATIVOS = " + negativos);
        sc.close();
    }
}
