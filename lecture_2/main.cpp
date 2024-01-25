#include <iostream>
#include <bitset>

using namespace std;

int main() {
  bool a = true;
  int b = 42;

  short s = 0;  // 2byte

  for(short i = 0; i < 15; i++) {
    s -= pow(2, i);
  }

  s --;
  cout << s << endl;

  bitset<16> bs(s);

  cout << bs << endl;
  cout << "number of bits: ";
  cout << bs.size() << endl;


  double pi = 3.14; // 8byte

  cout << (pi + b) << endl;

  if (a == b) {
    cout << "works" << endl;
  }

  int c = 42;


}
