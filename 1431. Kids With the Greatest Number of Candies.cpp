#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        // Find the maximum number of candies any kid currently has
        int _maxElement = *max_element(candies.begin(), candies.end());
        vector<bool> result;
        // Check if each kid can have the greatest number of candies after receiving extra candies
        for (int i = 0; i < candies.size(); i++)
            result.push_back(candies[i] + extraCandies >= _maxElement);
        return result;
    }
};

/*
 * Complexity
 * - Time Complexity: O(n)
 * - Space Complexity: O(n)
 */