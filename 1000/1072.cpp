#include <iostream>
using namespace std;

int main(){
  int num, cnt, a;
  cin >> num;
  
  cnt = 0;
  while(cnt<num){
    cin >> a;
    cout << a << "\n";
    cnt++;
  }

  for(int i=0; i<num; i++){
    cin >> a;
    cout << a << "\n";
  }
  
  return 0;
}
