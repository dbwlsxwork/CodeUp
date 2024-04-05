#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a;
    int arr[a];

    // 인덱스 0부터 시작 주의
    for(int i=0; i<a; i++){
        cin >> b;
        arr[i] = b;
    }

    for(int i=a-1; i>=0; i--){
        cout << arr[i] << " ";
    }

    return 0;
}
