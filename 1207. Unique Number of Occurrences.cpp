#include <vector>
#include <map>
using namespace std;
class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        map<int, int> occurrenceCount = {};

        for (int i = 0; i < arr.size(); ++i)
        {
            if (occurrenceCount[arr[i]] == 0)
                occurrenceCount[arr[i]] = 1; // First occurrence is at i
            for (int j = i + 1; j < arr.size(); ++j)
            {
                if (arr[i] == arr[j])
                    occurrenceCount[arr[i]]++; // Increment count for this number
            }
        }

        for (auto &pair : occurrenceCount)
        {
            for (auto &comparePair : occurrenceCount)
            {
                if (pair.first != comparePair.first && pair.second == comparePair.second)
                    return false; // Found a duplicate occurrence count
            }
        }
        return true; // All occurrences are unique
    }
};