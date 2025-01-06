#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   vector<int> host ;
   vector<int> guest;
   while (n--){
      int x,y;
      cin>>x>>y;
      host.push_back(x);
      guest.push_back(y);
   }
    int count = 0;

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && host[i] == guest[j]) {
                count++;
            }
        }
    }

    cout << count << endl; 
    return 0;
   

}