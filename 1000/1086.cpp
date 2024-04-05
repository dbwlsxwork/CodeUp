#include <iostream>
using namespace std;

int main(){
    float a, b, c;
    cin >> a >> b >> c;

    double mb = (a*b*c)/(8*1024*1024);

    cout << fixed;
    cout.precision(2);
    cout << mb << " MB";

}
