/*
------------------------------------------------------------
Program: First Unique Character in a String

Description:
This program finds the index of the first non-repeating
(unique) character in a lowercase string.

If no unique character exists, it prints
"No Unique Character".

Concept Used:
- Frequency Array (Hashing technique)
- Character to index mapping using: s[i] - 'a'

Time Complexity: O(n)
Space Complexity: O(1)
------------------------------------------------------------
*/

#include <stdio.h>

int main()
{
    // Input string (only lowercase letters assumed)
    char s[] = "aabbeccddff";

    // Frequency array for 26 lowercase letters
    int freq[26] = {0};

    int index, i;

    // First pass: Count frequency of each character
    for(i = 0; s[i] != '\0'; i++)
    {
        index = s[i] - 'a';   // Convert character to index (0–25)
        freq[index]++;        // Increase frequency
    }

    // Second pass: Find first character with frequency 1
    for(int j = 0; s[j] != '\0'; j++)
    {
        if(freq[s[j] - 'a'] == 1)
        {
            printf("The Index of Unique Character = %d", j);
            return 0;   // Exit after finding first unique
        }
    }

    // If no unique character found
    printf("No Unique Character");
    return -1;
}
