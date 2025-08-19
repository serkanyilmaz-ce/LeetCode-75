#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    /**
     * @brief Reverses only the vowels in a string.
     * @param s The input string.
     * @return A new string with the vowels reversed.
     */
    string reverseVowels(string s)
    {
        vector<char> vowels;
        // Collect all vowels in the string
        for (char c : s)
        {
            if (isVowel(c))
            {
                vowels.push_back(c);
            }
        }
        reverse(vowels.begin(), vowels.end()); // Reverse the collected vowels

        string result;
        int j = 0;
        // Reconstruct the string, replacing vowels with reversed ones
        for (char c : s)
        {
            if (isVowel(c))
            {
                result.push_back(vowels[j++]);
            }
            else
            {
                result.push_back(c);
            }
        }
        return result;
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