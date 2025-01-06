#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> pi(n + 1), result(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> pi[i];
    }
    for (int i = 1; i <= n; i++) {
        result[pi[i]] = i;
    }
    for (int i = 1; i <= n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
