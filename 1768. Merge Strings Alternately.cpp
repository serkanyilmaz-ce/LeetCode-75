#include <string>
using namespace std;

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        int i = 0, j = 0;
        string result = "";

        // Append characters alternately from word1 and word2
        while (i < word1.size() || j < word2.size())
        {
            if (i < word1.size())
            {
                result += word1[i++];
            }
            if (j < word2.size())
            {
                result += word2[j++];
            }
        }
        return result;
    }
};