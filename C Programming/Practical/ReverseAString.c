// C program to reverse a string using a loop, and a function
#include <stdio.h>
#include <string.h>

// int main() {
//     char str[100], temp;
//     int i, len;

//     // Taking input
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     len = strlen(str);  // Finding length of the string

//     // Swapping characters from both ends
//     for (i = 0; i < len / 2; i++) {
//         temp = str[i];
//         str[i] = str[len - i - 1];
//         str[len - i - 1] = temp;
//     }

//     printf("Reversed string: %s\n", str);
//     return 0;
// }

// Using function



// Function to reverse a string
void reverseString(char str[]) {
    int i, len = strlen(str);
    char temp;

    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    reverseString(str);  // Function call

    printf("Reversed string: %s\n", str);
    return 0;
}
