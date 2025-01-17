#include <bits/stdc++.h>
using namespace std;

int ribbonPieces(int n, int a, int b, int c) {
   
    vector<int> dp(n + 1, -1);
    dp[0] = 0; 

    for (int i = 1; i <= n; ++i) {
        if (i >= a && dp[i - a] != -1) {
            dp[i] = max(dp[i], dp[i - a] + 1);
        }
        if (i >= b && dp[i - b] != -1) {
            dp[i] = max(dp[i], dp[i - b] + 1);
        }
        if (i >= c && dp[i - c] != -1) {
            dp[i] = max(dp[i], dp[i - c] + 1);
        }
    }

    return dp[n];
}

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    cout << ribbonPieces(n, a, b, c) << endl;

    return 0;
}
