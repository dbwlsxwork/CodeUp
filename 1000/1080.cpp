// 풀이 1
#include <iostream>
using namespace std;

int main(){
    int num, sum=0;
    cin >> num;

    for(int i=1; i<num; i++){
        if(sum<num){
            sum += i;
        }
        else{
            cout << i-1;
            break;
        }
    }
}


// 풀이 2
#include <iostream>
using namespace std;

int main(){
    int num, sum=0, i=1;
    cin >> num;

    while(true){
        sum += i;
        if(sum>=num){
            cout << i;
            break;
        }
        else{
            i++;
        }
    }
}
