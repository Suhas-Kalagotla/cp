#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  int x[t], y[t];
  for (int i = 0; i < t; i++) {
    cin >> x[i];
  }
  for (int i = 0; i < t; i++) {
    cin >> y[i];
  }

  double ans = 0;
  for (int i = 0; i < t; i++) {
    for (int j = i + 1; j < t; j++) {
      int dx = x[i] - x[j];
      int dy = y[i] - y[j];
      int square = dx * dx + dy * dy;
      ans = max(ans, sqrt(square));
    }
  }
  cout << (int)pow(ans, 2) << endl;
}
