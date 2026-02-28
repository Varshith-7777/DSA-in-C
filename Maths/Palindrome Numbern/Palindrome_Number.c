/*
============================================================
    File Name   : palindrome_number.c
    Description : Check whether a given integer is a palindrome
    Time Complexity  : O(log10 n)
    Space Complexity : O(1)
============================================================

A palindrome number reads the same forward and backward.

Example:
Input  : 121
Output : Palindrome

Input  : -121
Output : Not Palindrome
============================================================
*/

#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is palindrome
bool isPalindrome(int x)
{
    // Negative numbers cannot be palindrome
    if (x < 0)
        return false;

    long rev = 0;
    int original = x;

    while (x > 0)
    {
        int rem = x % 10;        // Extract last digit
        rev = rev * 10 + rem;    // Build reversed number
        x = x / 10;              // Remove last digit
    }

    return (original == rev);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("%d is a Palindrome\n", num);
    else
        printf("%d is NOT a Palindrome\n", num);

    return 0;
}
