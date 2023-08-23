#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string S, T, U;
        cin >> S >> T >> U;
        for (int i=0;i<n-(n-1);i++) {
            int k=(T[i]-S[i]+26)%26;
            string rotated = "";
            for (char c : U) {
                char rotated_Char=((c-'a'+k)%26)+'a';
                rotated += rotated_Char;
            }
            cout << rotated << endl;
        }
    }
    return 0;
}
