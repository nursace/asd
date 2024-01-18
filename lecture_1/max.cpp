#include <iostream>

using namespace std;

// branched algorithm
// разветвленный алгоритм
int main() {
  int a, b, c;
  cin >> a >> b >> c;

  if (a > b && a > c) {
    cout << "Max is: " << a << endl;
  } else if (b > a && b > c) {
    cout << "Max is: " << b << endl;
  } else {
    cout << "Max is: " << c << endl;
  }
}
