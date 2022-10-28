import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        String letter;
        boolean lowercase_vowel = false , uppercase_vowel = false;
        Scanner scanner =  new Scanner(System.in);

        System.out.println("Enter a letter: ");
        letter = scanner.nextLine();

        lowercase_vowel = (letter.equals("a") || letter.equals("e") || letter.equals("i") || letter.equals("o") || letter.equals("u"));
        uppercase_vowel = (letter.equals("A") || letter.equals("E") || letter.equals("I") || letter.equals("O") || letter.equals("U"));

        if(lowercase_vowel || uppercase_vowel){
            System.out.println(letter + " is a vowel!");
        }else{
            System.out.println(letter + " is a consonant!");
        }

    }
}