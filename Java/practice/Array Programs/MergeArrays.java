// Program to merge two arrays in Java
public class MergeArrays {
    public static void main(String[] args) {
        // First array
        int[] array1 = {1, 2, 3, 4};
        
        // Second array
        int[] array2 = {5, 6, 7, 8};

        // Calculate size of the merged array
        int[] mergedArray = new int[array1.length + array2.length];

        // Copy elements of array1
        for (int i = 0; i < array1.length; i++) {
            mergedArray[i] = array1[i];
        }

        // Copy elements of array2
        for (int i = 0; i < array2.length; i++) {
            mergedArray[array1.length + i] = array2[i];
        }

        // Display merged array
        System.out.print("Merged Array: ");
        for (int num : mergedArray) {
            System.out.print(num + " ");
        }
    }
}
