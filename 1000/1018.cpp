#include <iostream>
using namespace std;

int main() {
  string time;
  string h, m;
  cin >> time;

  unsigned int sep=0;
  while(sep = time.find(":")) {
          h = time.substr(0,sep);
          m = time.substr(sep+1, time.length());
          break;
  }
  cout << h << ":" << m;
  return 0;
}
