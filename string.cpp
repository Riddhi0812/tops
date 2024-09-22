#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to reverse the string
void reverseString(char str[]) {
    int len = strlen(str);
    printf("Reversed string: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

// Function to concatenate two strings
void concatenateStrings(char str1[], char str2[]) {
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
}

// Function to check if the string is a palindrome
void checkPalindrome(char str[]) {
    int len = strlen(str);
    int flag = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
}

// Function to copy a string
void copyString(char str[]) {
    char copied[100];
    strcpy(copied, str);
    printf("Copied string: %s\n", copied);
}

// Function to find the length of the string
void stringLength(char str[]) {
    printf("Length of the string: %lu\n", strlen(str));
}

// Function to find the frequency of characters in the string
void frequencyOfCharacters(char str[]) {
    int freq[256] = {0};
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }
    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }
}

// Function to count the number of vowels and consonants
void countVowelsConsonants(char str[]) {
    int vowels = 0, consonants = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
}

// Function to count the number of blank spaces and digits
void countSpacesDigits(char str[]) {
    int spaces = 0, digits = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i]))
            spaces++;
        else if (isdigit(str[i]))
            digits++;
    }
    printf("Number of spaces: %d\n", spaces);
    printf("Number of digits: %d\n", digits);
}

int main() {
    char str1[100], str2[100];
    int choice;
    char cont = 'y';

    while (cont == 'y' || cont == 'Y') {
        printf("\nChoose an operation:\n");
        printf("1. Reverse a string\n");
        printf("2. Concatenate two strings\n");
        printf("3. Check if the string is a palindrome\n");
        printf("4. Copy a string\n");
        printf("5. Find the length of the string\n");
        printf("6. Find the frequency of characters in the string\n");
        printf("7. Find the number of vowels and consonants\n");
        printf("8. Find the number of blank spaces and digits\n");
        printf("Enter your choice (1-8): ");
        scanf("%d", &choice);
        getchar(); // To consume the newline character after input

        switch (choice) {
            case 1:
                printf("Enter a string to reverse: ");
                gets(str1);
                reverseString(str1);
                break;

            case 2:
                printf("Enter the first string: ");
                gets(str1);
                printf("Enter the second string: ");
                gets(str2);
                concatenateStrings(str1, str2);
                break;

            case 3:
                printf("Enter a string to check palindrome: ");
                gets(str1);
                checkPalindrome(str1);
                break;

            case 4:
                printf("Enter a string to copy: ");
                gets(str1);
                copyString(str1);
                break;

            case 5:
                printf("Enter a string to find its length: ");
                gets(str1);
                stringLength(str1);
                break;

            case 6:
                printf("Enter a string to find frequency of characters: ");
                gets(str1);
                frequencyOfCharacters(str1);
                break;

            case 7:
                printf("Enter a string to count vowels and consonants: ");
                gets(str1);
                countVowelsConsonants(str1);
                break;

            case 8:
                printf("Enter a string to count spaces and digits: ");
                gets(str1);
                countSpacesDigits(str1);
                break;

            default:
                printf("Invalid choice! Please select a valid option.\n");
                break;
        }

        printf("\nDo you want to perform another operation? (y/n): ");
        scanf(" %c", &cont);
    }

    printf("Exiting the program. Goodbye!\n");
    return 0;
}

