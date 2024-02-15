#include <iostream>

using namespace std; 

int binary_search(int *a, int n, int x) {
  // l r
  // while r - l > 0
  // m = (l + r) / 2
  // if a[m] > x: r = m - 1
  // if a[m] < x: l = m + 1
  // if a[m] == x
  
  int index = -1;              // 1
  int l = 0, r = n - 1;        // 2

  while (l <= r) {             // 3 * log(n)
    int mid = (l + r) / 2;     

    if (a[mid] == x) {
      index = mid;
      break;
    } else if (a[mid] < x) {
      l = mid + 1;
    } else {
      r = mid - 1;
    }
  }
  return index; // 1
  // T(n) = 1 + 2 + 1 + 3log(n) => 4 + 3log(n)
  // O(log(n))
  //
  //
  // O(n)           O(log(n))
}

int main(int argc, char* argv[]) {
  /*
   * INPUT: a1 <= a2 <= a3 <= .. an; x
   *
   * find x in a
  */

  srand(time(NULL));

  const int n = 20;
  
  int a[n];

  for(int i = 0; i < n; i++) {
    a[i] = rand() % 100;
  }

  sort(a, a + n);

  for(int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  int x; cin >> x;

  int index = binary_search(a, n, x);

  if (index != -1) {
    cout << x << " found at index: " << index << endl;
  } else {
    cout << "not found" << endl;
  }
}

