#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> hex >> n;

    for(int i=1; i<16; i++){
        cout << hex << uppercase << n << "*" << i << "=";
        cout << hex << uppercase << n*i << endl;
    }
}
