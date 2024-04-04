#include <iostream>
using namespace std;

int main() {
    float f;
    cin >> f;
    cout << fixed;
    cout.precision(2);
    cout << f;  // 자동으로 둘째 자리까지 반올림
    return 0;
}
