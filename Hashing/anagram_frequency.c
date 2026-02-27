/*
Problem: Valid Anagram
Concept: Frequency Array (Hashing)
Approach:
- Use int freq[26]
- Checking is strings are equal
- converting character to index value
- Increment for s[i]
- Decrement for t[i]
- If all values of frequency are zero → Anagram

Time Complexity: O(n)
Space Complexity: O(1)
*/


#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "anagram";
    char t[] = "nagaram";
    int freq[26] = {0};
    
    //Check length of both strings
   if(strlen(s)!=strlen(t))
   {
     printf("Not An Anagram");
     return 0;
   }
  
  
    // Traverse both strings
    for (int i = 0; s[i] != '\0' && t[i] != '\0'; i++)
    {
        int index1 = s[i] - 'a';  // map char to index
        int index2 = t[i] - 'a';

        freq[index1]++;  // increase for s
        freq[index2]--;  // decrease for t
    }


    // Check frequency array
    for (int j = 0; j < 26; j++)
    {
        if (freq[j] != 0)
        {
            printf("Not An Anagram");
            return 0;
        }
    }

    printf("An Anagram");
    return 0;
}
