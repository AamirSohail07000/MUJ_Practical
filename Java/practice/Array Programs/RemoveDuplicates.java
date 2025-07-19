import java.util.*;

public class RemoveDuplicates {
    public static void main(String[] args) {
        // Original array with duplicates
        int[] array = {1, 2, 3, 2, 4, 3, 5, 1};

        // Use LinkedHashSet to remove duplicates and maintain insertion order
        Set<Integer> uniqueElements = new LinkedHashSet<>();

        // Add elements to the set
        for (int num : array) {
            uniqueElements.add(num);
        }

        // Convert set back to array (optional)
        int[] result = new int[uniqueElements.size()];
        int index = 0;
        for (int num : uniqueElements) {
            result[index++] = num;
        }

        // Print result
        System.out.print("Array after removing duplicates: ");
        for (int num : result) {
            System.out.print(num + " ");
        }
    }
}
