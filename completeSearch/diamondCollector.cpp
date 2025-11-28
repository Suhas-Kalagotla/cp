#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int i = 0, j = 1;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int maxSize = 0;
  sort(a, a + n);
  while (i < j && j < n) {
    if (a[j] - a[i] > k) {
      i++;
    }
    j++;
    maxSize = max(maxSize, j - i);
  }
  cout << maxSize << endl;
}
