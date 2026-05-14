// ...existing code...
#include <vector>
#include <algorithm>
using namespace std;

/*
In LeetCode 2784: Check if Array is Good.
A "good" array of size n must contain:
  1, 2, 3, ..., n-1
with the largest number (n-1) appearing twice.
After sorting the array it should be:
  [1, 2, 3, ..., n-2, n-1, n-1]

Examples:
 Good:
  [2,1,3,3] -> after sorting [1,2,3,3] (n=4) => good

 Not good:
  [1,1,2,3]
   - 1 appears twice
   - but the largest number 3 should appear twice instead

Notes on an attempted approach:
 - Tried using XOR, but it doesn't work because different arrays can produce the same XOR.
   XOR only tracks parity (odd/even) of counts; it does not track exact frequencies.

XOR of first n numbers:
 n % 4  -> result
  0     -> n
  1     -> 1
  2     -> n + 1
  3     -> 0
*/

class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        if (n < 2) return false; // need at least two elements to have a duplicate largest

        for (int i = 0; i < n - 1; ++i) {
            if (nums[i] != i + 1)
                return false;
        }

        return nums[n - 1] == n - 1;
    }
};
// ...existing code...