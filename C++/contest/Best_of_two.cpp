#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, a3, b1, b2, b3;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
        int c1[] = {a1, a2, a3};
        int c2[] = {b1, b2, b3};
        sort(c1, c1 + 3, greater<int>());
        sort(c2, c2 + 3, greater<int>());
        int AliceScore = c1[0] + c1[1];
        int BobScore = c2[0] + c2[1];
        if (AliceScore > BobScore)
            cout << "Alice" << endl;
        else if (AliceScore < BobScore)
            cout << "Bob" << endl;
        else
            cout << "Tie" << endl;
    }
    return 0;
}
