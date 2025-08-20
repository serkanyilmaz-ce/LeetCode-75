#include <string>
#include <vector>

using namespace std;

class Solution
{
public:
    /**
     * @brief Reverses only the vowels in the input string.
     * @param s The input string to process.
     * @return A new string with the vowels reversed.
     */
    string reverseVowels(string s)
    {
        int i = 0;
        int j = s.size() - 1;
        while (i < j)
        {
            // Move i forward until a vowel is found
            while (i < j && !isVowel(s[i]))
                i++;
            // Move j backward until a vowel is found
            while (i < j && !isVowel(s[j]))
                j--;
            // Swap the vowels at positions i and j
            swap(s[i], s[j]);
            i++;
            j--;
        }
        return s;
    }

private:
    /**
     * @brief Checks if a character is a vowel (case-insensitive).
     * @param c The character to check.
     * @return True if c is a vowel, false otherwise.
     */
    bool isVowel(char c)
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
};

/*
 * Complexity
 * - Time Complexity: O(n)
 * - Space Complexity: O(1) (in-place)
 */