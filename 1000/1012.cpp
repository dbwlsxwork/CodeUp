#include <iostream>
using namespace std;

int main() {
  float x;
  cin >> x;
  cout << fixed; // 소수점 자리 고정
  cout.precision(6); // fixed와 함께 사용. 소수점 이하 자리 6개로 고정
  cout << x;
  return 0;
}
