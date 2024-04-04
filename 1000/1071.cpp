#include <iostream>
using namespace std;

int main() {
  int n;
tryAgain:
  cin >> n;

  if(n!=0){
    cout << n << endl;
    goto tryAgain;
  }
  return 0;
}
