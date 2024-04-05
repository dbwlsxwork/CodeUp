// 풀이 1
#include <iostream>
using namespace std;

int main(){
    char c;
    
    do{
        cin >> c;
        cout << c << endl;
    } while(c!='q');
}


// 풀이 2
#include <iostream>
using namespace std;

int main(){
    char c;
    
    while(true){
        cin >> c;
        if(c!='q'){
            cout << c << endl;
        }
        else{
            cout << c << endl;
            break;
        }
    }
}
