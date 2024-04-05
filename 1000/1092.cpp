#include <iostream>
using namespace std;

int main(){
    long a, b, c, day=1;
    cin >> a >> b >> c;

    while(true){
        if(day%a==0 && day%b==0 && day%c==0){
            cout << day;
            break;
        }
        else{
            day += 1;
        }
    }
    return 0;
}
