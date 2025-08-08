#include <string>
using namespace std;

class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        // If concatenating in both orders gives different results, no GCD string exists
        if (str1 + str2 != str2 + str1)
            return "";

        // Helper function to compute GCD of two numbers
        auto gcd = [](int a, int b)
        {
            while (b)
            {
                int temp = b;
                b = a % b;
                a = temp;
            }
            return a;
        };

        int len = gcd(str1.size(), str2.size());
        return str1.substr(0, len);
    }
};