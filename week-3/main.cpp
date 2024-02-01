#include <iostream>

using namespace std;

int main() {

  int n; 

  cout << "Input side of a square: ";
  cin >> n;

  if (n < 0) {
    cout << "negative side" << endl;
  } else {
    int p = n * 4;

    cout << "Perimeter of given square is " << p << endl;
  }
}
