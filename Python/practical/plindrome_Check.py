# Write a Python program to check if a given string is a palindrome

def is_palindrome(s):
    # Convert to lowercase and remove spaces for uniformity
    s = s.replace(" ", "").lower()
    
    # Check if the string is equal to its reverse
    return s == s[::-1]

# Example usage
string = input("Enter a string: ")
if is_palindrome(string):
    print("The string is a palindrome.")
else:
    print("The string is not a palindrome.")
