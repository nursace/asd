#include <iostream>

using namespace std; 

int my_pow(int a, int b) {
  int i = 0; // 1
  int result = 1; // 1 

  while (i < b) {  // b
    result *= a;  // b
    i += 1;      // b
  }

  return result; // 1
  
  // T(a, b) = 1 + 1 + 1 + b + b + b => 3 + 3b
  // O(b) => O(n)
}

int main(int argc, char* argv[]) {
  /*
     INPUT: a, b
     calculate: a in power of b
  */

  // cout << "argc: " << argc << endl;

  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  cout << my_pow(a, b) << endl;
}

