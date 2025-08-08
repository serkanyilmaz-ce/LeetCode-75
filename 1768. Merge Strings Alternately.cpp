#include <string>
using namespace std;


class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        char *ch1 = &word1[0];
        char *ch2 = &word2[0];
        string result = "";
        while ((*ch1) != '\0' || (*ch2) != '\0') {
            if (*ch1) {
                result += *ch1++;
            }
            if (*ch2) {
                result += *ch2++;
            }
        }
        return result;
    }
};