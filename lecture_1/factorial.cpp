#include <iostream>

using namespace std;

int main() {
  int n;
  int factorial = 1;

  cout << "Input a number to calc factorial: ";
  cin >> n;

  for(int i = 1; i <= n; i ++) {
    factorial = factorial * i;
  }

  cout << "Factorial of n: " << factorial << endl;
}
