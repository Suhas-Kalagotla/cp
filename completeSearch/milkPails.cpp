#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y, m;
  cin >> x >> y >> m;
  int a = 0;
  int b = 0;
  int ansa = 0;
  int ansb = 0;

  int diff = 0;
  while (x * a <= m) {
    int n = m - (x * a);
    int val = n / y;
    int value = x * a + y * val;
    if (value > diff && value <= m) {
      ansa = a;
      ansb = val;
      diff = value;
    }
    a++;
  }

  cout << diff << endl;
}
