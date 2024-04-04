#include <iostream>
using namespace std;

int main() {
  unsigned int a, b;
  cin >> a >> b;
  cout << a+b << endl;
  cout << a-b << endl;
  cout << a*b << endl;
  cout << a/b << endl;
  cout << a%b << endl;
  
  cout << fixed;
  cout.precision(2);
  cout << a/(double)b;
  return 0;
}
