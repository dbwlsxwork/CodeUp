#include <iostream>
using namespace std;

int main(){
    int num, id;
    int arr[24] = {};
    cin >> num;

    for(int i=1; i<=num; i++){
        cin >> id;
        arr[id]++;
    }

    for(int i=1; i<=23; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
