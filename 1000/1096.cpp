#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, x, y;
    int arr[19][19] = {};
    cin >> n;

    // n 개수만큼 좌표(x,y) 입력 후, 배열에 저장
    for(int i=0; i<n; i++){
        cin >> x >> y;
        arr[x-1][y-1] = 1;
    }

    // 바둑판 출력
    for(int i=0; i<19; i++){
        for(int j=0; j<19; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
