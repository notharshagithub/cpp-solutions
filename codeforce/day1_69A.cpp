#include <bits/stdc++.h>
using namespace std;

/*

Question Explanation:
- We are given forces acting on a body in 3D space.
- Every force has x, y, and z components.
- A body stays in equilibrium only if total force in every direction becomes 0.
- So we simply add all x values, all y values, and all z values.
- If all three sums are 0, answer is YES otherwise NO.

Pattern / Observation:
- Many simulation or physics problems reduce to simple cumulative sums.
- Instead of thinking about individual vectors, combine all effects together.
- If final net effect becomes neutral, system is balanced.
- This pattern is common in prefix sums, balance checking, and invariant problems.

New Concepts Learned:
- Vector equilibrium means resultant force must be zero in every dimension.
- Sometimes hard-looking physics problems are just basic math aggregation.
- Separating dimensions independently is an important competitive programming trick.

Solution Idea:
- Maintain sum of x, y, z separately.
- Add every vector component to corresponding axis.
- Check whether all sums become 0.

*/

int main() {

    int n;
    cin >> n;

    int x = 0;
    int y = 0;
    int z = 0;

    while (n--) {

        int a, b, c;
        cin >> a >> b >> c;

        x += a;
        y += b;
        z += c;
    }

    if (x == 0 && y == 0 && z == 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}