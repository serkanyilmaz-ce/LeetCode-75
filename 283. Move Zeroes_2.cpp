#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int lastNonZero = 0;
        // 1) Move non-zeros forward
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] != 0)
            {
                nums[lastNonZero++] = nums[i];
            }
        }
        // 2) Fill the rest with zeros
        for (int i = lastNonZero; i < nums.size(); ++i)
        {
            nums[i] = 0;
        }
    }
};

/*
 * Complexity
 * - Time Complexity: O(n)
 * - Space Complexity: O(1)
 */