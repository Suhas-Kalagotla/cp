#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string temp = "abc";
    string ans = "";
    for (int i = 0; i < n; i++) {
      ans += temp[i % 3];
    }
    cout << ans << endl;
  }
}
