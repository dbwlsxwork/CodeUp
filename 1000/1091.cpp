#include <iostream>
using namespace std;

int main(){
    long a, b, c, d;
    cin >> a >> b >> c >> d;

    for(int i=1; i<d; i++){
        a = a*b+c;
    }
    cout << a;
}
