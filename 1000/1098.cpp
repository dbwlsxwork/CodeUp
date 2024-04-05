#include <iostream>

using namespace std;

int main(){
    int h, w, n, l, d, x, y;
    cin >> h >> w;
    cin >> n;
    int arr[100][100]={};

    // n 개수만큼 (l, d, x, y) 입력 후, 배열에 저장
    for(int i=0; i<n; i++){
        cin >> l >> d >> x >> y;
        if(d==0){
            for(int j=0; j<l; j++){
                arr[x-1][y-1+j] = 1;
            }
        }
        else{
            for(int j=0; j<l; j++){
                arr[x-1+j][y-1] = 1;
            }
        }
    }

    // 바둑판 배열 출력
    for(int a=0; a<h; a++){
        for(int b=0; b<w; b++){
            cout << arr[a][b] << " ";
        }
        cout << "\n";
    }

    return 0;
}
