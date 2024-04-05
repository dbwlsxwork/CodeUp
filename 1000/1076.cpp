// 풀이 1
#include <iostream>
using namespace std;

int main(){
    char c;
    cin >> c;
    
    for(char i=97; i<=c; i++){
        cout << i << ' ';
    }
}


// 풀이 2
#include <iostream>
using namespace std;

int main(){
    char c, alpha='a';
    cin >> c;
    
    do{
        cout << alpha << ' ';
        alpha++;
    } while(alpha<=c);
}
