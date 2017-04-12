#include <iostream>

using namespace std;

long long fact(int a) {
  if (a <= 1) return 1;
  return a * fact(a - 1);
}

int main () {
  int n;
  cin >> n;
  cout << fact(n) << '\n';
}

