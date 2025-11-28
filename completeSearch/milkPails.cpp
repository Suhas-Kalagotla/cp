#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y, m;
  cin >> x >> y >> m;
  int diff = 0;
  if (x > y)
    swap(x, y);

  for (int b = 0; b * y <= m; b++) {
    int n = m - (y * b);
    int a = n / x;
    diff = max(diff, a * x + b * y);
  }

  cout << diff << endl;
}
