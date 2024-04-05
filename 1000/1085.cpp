#include <iostream>
using namespace std;

int main(){
    float a, b, c, d;
    cin >> a >> b >> c >> d;

    double mb = (a*b*c*d)/(8*1024*1024);

    cout << fixed;
    cout.precision(1);
    cout << mb << " MB";
}
