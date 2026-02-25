import java.util.Locale;
import java.util.Scanner;

public class soma_vetor {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        int n, i;
        double[] v;
        double soma = 0.0, media;
        System.out.println("Quantos numeros voce vai digitar? ");
        n = sc.nextInt();
        v = new double[n];
        for (i = 0; i < n; i++) {
            System.out.println("Digite um numero: ");
            v[i] = sc.nextDouble();
            soma += v[i];
        }
        media = soma / n;
        System.out.println("VALORES = ");
        for (i = 0; i < n; i++) System.out.println(String.format("%.1f", v[i]) + " ");
        System.out.println("SOMA = " + String.format("%.2f", soma));
        System.out.println("MEDIA = " + String.format("%.2f", media));
        sc.close();
    }
}
