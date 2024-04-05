// 풀이 1
#include <stdio.h>
int main(){
    int a, b, c, cnt = 0;
    scanf("%d%d%d", &a, &b, &c);
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            for(int k=0; k<c; k++){
                printf("%d %d %d\n", i, j, k);
                cnt++;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}
  


// 풀이 2 - 시간초과
#include <iostream>
using namespace std;

int main(){
    int r, g, b, cnt=0;
    cin >> r >> g >> b;

    for(int i=0; i<r; i++){
        for(int j=0; j<g; j++){
            for(int k=0; k<b; k++){
                cout << i << " " << j << " " << k << endl;
                cnt += 1;
            }
        }
    }
    cout << cnt;
}
