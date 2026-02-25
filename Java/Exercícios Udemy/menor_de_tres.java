import java.util.Locale;
import java.util.Scanner;

public class menor_de_tres {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        int valor1, valor2, valor3, menor;
        System.out.println("Primeiro valor: ");
        valor1 = sc.nextInt();
        System.out.println("Segundo valor: ");
        valor2 = sc.nextInt();
        System.out.println("Terceiro valor: ");
        valor3 = sc.nextInt();
        menor = valor1;
        if (valor2 < menor) menor = valor2;
        if (valor3 < menor) menor = valor3;
        System.out.println("MENOR = " + menor);
        sc.close();
    }
}
