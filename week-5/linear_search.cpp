#include <iostream>

using namespace std; 

int search(int *a, int n, int x) {
  int index = -1; // -> 1
  // i = 0 -> 1
  // i < n -> (n + 1)
  // i++ n -> n
  for(int i = 0; i < n; i++) {
    if (a[i] == x) { // n
      index = i; // 1
      break; // 1
    }
  }
  return index; // 1
  
  // T(n) = 1 + 1 + (n+1) + n + n + 1 + 1 => 5 + 3n
  // search = O(n)
}

int main() {
  /*
   INPUT: a[n]
   integer x

   find x in a
  */

  srand(time(NULL));

  const int n = 20;
  
  int a[n];

  for(int i = 0; i < n; i++) {
    a[i] = rand() % 100;
    cout << a[i] << " ";
  }
  cout << endl;

  int x; cin >> x;

  int index = search(a, n, x);

  if (index != -1) {
    cout << x << " found at index: " << index << endl;
  } else {
    cout << "not found" << endl;
  }

}

