#include <vector>

using namespace std;

class Solution
{
public:
    /**
     * @brief Determines if n flowers can be planted in the flowerbed.
     *
     * @param flowerbed The vector representing the flowerbed (0 = empty, 1 = planted).
     * @param n The number of flowers to plant.
     * @return true if n flowers can be planted, false otherwise.
     */
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int _size = flowerbed.size();
        for (int i = 0; i < _size; i++)
        {
            if (flowerbed[i] == 0)
            {
                // Check if the left and right plots are empty or out of bounds
                bool leftEmpty = (i == 0) || (flowerbed[i - 1] == 0);
                bool rightEmpty = (i == _size - 1) || (flowerbed[i + 1] == 0);
                if (leftEmpty && rightEmpty)
                {
                    flowerbed[i] = 1; // Plant a flower here
                    n--;
                    if (n == 0)
                        break; // Early exit if all flowers are planted
                }
            }
        }
        return n <= 0;
    }
};

/*
 * Complexity
 * - Time Complexity: O(n)
 * - Space Complexity: O(1)
 */