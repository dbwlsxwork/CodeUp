#include <iostream>
using namespace std;

int main(){
    long n;
    int sum=0;
    cin >> n;
    
    for(int i=1; sum<n; i++){
        sum += i;
    }
    cout << sum;
    return 0;
}
