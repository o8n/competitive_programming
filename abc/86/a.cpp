#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <stdio.h>
#include <vector>
#include <ctype.h>
#include <algorithm>
#include <functional>
#include <sstream>
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int func(int a, int b, int c) {
  if (a % 2 == 1 || b % 2 == 1 || c % 2 == 1) return 0;
  if (a == b && b == c) return -1;
  return func((b+c)/2, (c+a)/2, (a+b)/2) + 1;
}

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int ans = func(a, b, c);

  cout << ans << endl;
  return 0;
}
// https://atcoder.jp/contests/agc014/submissions/me