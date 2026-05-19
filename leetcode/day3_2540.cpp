#include <bits/stdc++.h>
using namespace std;

/*

Question Explanation:
- We are given two sorted arrays.
- We need to find the smallest number present in both arrays.
- Since arrays are already sorted, smaller values appear first.
- We move through both arrays together and compare elements.
- The first common value found will automatically be the minimum common value.

Pattern / Observation:
- This is a classic Two Pointer pattern on sorted arrays.
- When arrays are sorted:
      smaller element can never help later,
      so move that pointer forward.
- If both become equal, we found answer.
- This pattern is heavily used in merge problems, intersections, interval problems, and searching.

New Concepts Learned:
- Sorted arrays allow linear-time solutions instead of brute force.
- Two pointers help compare two sequences efficiently.
- Eliminating impossible candidates greedily is an important CP technique.

Solution Idea:
- Start one pointer on each array.
- If values are equal → return answer.
- If nums1[i] is smaller → move i.
- Else move j.
- If no common element exists → return -1.

*/

class Solution {
public:

    int getCommon(vector<int>& nums1, vector<int>& nums2) {

        int i = 0;
        int j = 0;

        while (i < nums1.size() && j < nums2.size()) {

            // Common value found
            if (nums1[i] == nums2[j]) {
                return nums1[i];
            }

            // Remove smaller element
            if (nums1[i] < nums2[j]) {
                i++;
            }
            else {
                j++;
            }
        }

        return -1;
    }
};