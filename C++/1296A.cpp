#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int sum = 0;
      int c1 = 0,c2=0;
		for (int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			sum += x;
			if(x % 2 != 0){c1++;}
			if(x % 2 == 0){c2++;}
		}
		if (sum % 2 != 0 || (c1==c2)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}