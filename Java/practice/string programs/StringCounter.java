// Java program to count characters, words, and lines in a paragraph
import java.util.Scanner;

public class StringCounter {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a paragraph (type 'END' in a new line to finish):");

        StringBuilder text = new StringBuilder();
        String line;
        int lineCount = 0;

        // Read multiple lines until "END" is entered
        while (!(line = sc.nextLine()).equals("END")) {
            text.append(line).append("\n");
            lineCount++;
        }

        String content = text.toString();

        // Count characters
        int charCount = content.replace("\n", "").length();

        // Count words
        String[] words = content.trim().split("\\s+");
        int wordCount = (content.trim().isEmpty()) ? 0 : words.length;

        System.out.println("\nCharacter count: " + charCount);
        System.out.println("Word count: " + wordCount);
        System.out.println("Line count: " + lineCount);

        sc.close();
    }
}
