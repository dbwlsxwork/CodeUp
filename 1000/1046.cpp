#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  cout << a+b+c << endl;

  cout << fixed;
  cout.precision(1);
  cout << double(a+b+c)/3;
  return 0;
}
