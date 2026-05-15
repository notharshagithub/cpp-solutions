153. Find Minimum in Rotated Sorted Array
this is very easy question no need explanation


class Solution {
    public:
        int findMin(vector<int>& nums) {
            int ans = nums[0];
            for(auto x :nums){
                ans = min(ans,x);
            }
            return ans;
        }
    };

