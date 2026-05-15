#include <bits/stdc++.h>
using namespace std;

/*

Question Explanation:
- We are given a rectangle of width w and height h.
- On all 4 sides, some points are marked.
- We need to make the maximum possible triangle using points from one side.
- The maximum area comes from taking the farthest two points on a side.
- Since actual area formula has /2, problem already asks for doubled area.

Pattern / Observation:
- Whenever we need maximum distance on a line, usually only first and last elements matter.
- Here points are already sorted, so maximum base = last - first.
- Try all possible sides independently and take maximum answer.
- This pattern appears in geometry and greedy problems where extreme points give optimal answer.

New Concepts Learned:
- In rectangle geometry problems, fixing one dimension and maximizing another is common.
- Extreme values (minimum and maximum points) often produce optimal area/perimeter.
- Sometimes problems ask for doubled area to avoid floating point calculations.

Solution Idea:
- For bottom and top sides:
      area = base * h
- For left and right sides:
      area = base * w
- Take maximum among all 4 sides.

*/

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long w, h;
        cin >> w >> h;

        long long ans = 0;

        for (int side = 0; side < 4; side++) {
            int k;
            cin >> k;

            vector<long long> a(k);

            for (int i = 0; i < k; i++) {
                cin >> a[i];
            }

            // Maximum possible base on this side
            long long base = a.back() - a.front();

            // Bottom or Top side
            if (side == 0 || side == 1) {
                ans = max(ans, base * h);
            }
            // Left or Right side
            else {
                ans = max(ans, base * w);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}