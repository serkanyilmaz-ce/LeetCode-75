#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            int j = i + 1;
            if (nums[i] == 0)
            {
                while (j < nums.size())
                {
                    if (nums[j] != 0)
                    {
                        swap(nums[i], nums[j]);
                        break;
                    }
                    j++;
                }
            }
        }
    }
};

/*
 * Complexity
 * - Time Complexity: O(n²)
 * - Space Complexity: O(1)
 */