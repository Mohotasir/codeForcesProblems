#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,c=0;
    cin >> n;
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string l = "abcdefghijklmnopqrstuvwxyz";
   
    for (int i =0; i< l.length() ;i++) {
        for(int j=0;j<s.length();j++){
           if(l[i] == s[j]){
              c ++;
              break;
           }
        }
        if (c == 0)
            break;
    }

    if (c==26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
