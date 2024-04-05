#include <iostream>
#include <algorithm> // 정렬, 최댓값, 최솟값 가능
using namespace std;

int main(){
    int a;
    cin >> a;
    int arr[a];

    for(int i=0; i<a; i++){
        cin >> arr[i];
    }
    cout << *min_element(arr, arr+a);

    return 0;
}
