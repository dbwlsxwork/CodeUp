#include <iostream>

using namespace std;

int main(){
    int arr[20][20];
    int x=1, y=1;

    // 10*10 배열 입력
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cin >> arr[i][j];
        }
    }

    // 개미 이동경로 변경 조건문
    while(true){
        if(arr[x][y]==2){
            arr[x][y]=9;
            break;
        }
        else if(arr[x][y]==0){
            arr[x][y]=9;
            y += 1;
        }
        else if(arr[x][y]==1){
            x += 1;
            y -= 1;
        }
        else{
            break;
        }
    }

    // 개미 이동경로 출력
    for(int m=0; m<10; m++){
        for(int n=0; n<10; n++){
            cout << arr[m][n] << " ";
        }
        cout << "\n";
    }
    return 0;
}
