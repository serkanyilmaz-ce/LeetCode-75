#include <string>
using namespace std;

class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        string result = "";

        char *ch1 = &str1[0];
        char *ch2 = &str2[0];

        while (*ch1 && *ch2)
        {
            if (*ch1 == *ch2 && result.find(*ch1) == string::npos)
            {
                result += *ch1;
                ch1++;
                ch2++;
            }
            else
            {
                if (!result.empty())
                {
                    while (*ch1)
                        if (*ch1)
                }
                break;
            }
        }
        return result;
    }
};