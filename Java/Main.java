import java.util.Locale;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        String nome, sobrenome, sexo_extenso = "Humano";
        int idade = 0;
        char sexo;
        boolean idade_valida = false, sexo_valido = false, acesso_valido = false;
        System.out.println("Nome: ");
        nome = sc.nextLine();
        System.out.println("Sobrenome: ");
        sobrenome = sc.nextLine();
        while (idade_valida == false) {
            System.out.println("Idade: ");
            idade = sc.nextInt();
            if (idade < 0 || idade > 130) {
                System.out.println("Por favor, insira uma idade valida.");
                idade_valida = false;
            } else {
                if (idade < 18) {
                    acesso_valido = false;
                } else {
                    acesso_valido = true;
                }
                idade_valida = true;
            }
        }
        while (sexo_valido == false) {
            System.out.println("Sexo (M/F): ");
            sexo = Character.toUpperCase(sc.next().charAt(0));
            if (sexo != 'M' && sexo != 'F') {
                System.out.println("Por favor, insira um sexo valido.");
                sexo_valido = false;
            } else if (sexo == 'M') {
                sexo_extenso = "Masculino";
                sexo_valido = true;
            } else if (sexo == 'F') {
                sexo_extenso = "Feminino";
                sexo_valido = true;
            }
        }
        System.out.println("Voce eh " + nome + " " + sobrenome + ", de sexo " + sexo_extenso + " e " + idade + " anos de idade;");
        if (acesso_valido == false) {
            System.out.println("Voce eh menor de idade, por isso seu acesso foi negado!");
        } else {
            System.out.println("Voce eh maior de idade, por isso teve seu acesso validado!");
        }
        sc.close();
    }
}