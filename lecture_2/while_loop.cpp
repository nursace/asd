#include <iostream>

using namespace std;

int main () {
  // int n; // 4 byte
  // cout << "input a number: ";
  // cin >> n;

  int k = 0;
  int n = 1000000;

  int sum = 0;
  while (sum >= 0) {
    sum = 0;
    n += 1;
    k = n; // 1000365
           //
    while (k --) {
      sum = sum + k;
    }

  }

  cout << "n: " << n  << endl;
  cout << "sum: " << sum << endl;
}
