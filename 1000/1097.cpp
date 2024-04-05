#include <iostream>
using namespace std;

int main(){
    int arr[19][19];
    int n, x, y;

    // 19*19 배열에 값 입력
    for(int i=0; i<19; i++){
        for(int j=0; j<19; j++){
            cin >> arr[i][j];
        }
    }
    cin >> n;
    // n 개수만큼 좌표(x, y) 입력
    for(int i=0; i<n; i++){
        cin >> x >> y;
        // 십자 뒤집기
        for(int m=0; m<19; m++){
            arr[x-1][m] = not arr[x-1][m];
            arr[m][y-1] = not arr[m][y-1];
        }
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
